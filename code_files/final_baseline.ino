#include <DHT.h>

#define DHTPIN 16
#define DHTTYPE DHT11

DHT dht(DHTPIN, DHTTYPE);

const int mq7Pin = 26;
const int mq5Pin = 27;
const int mq135Pin = 28;

const int flamePin = 14;
const int buzzerPin = 15;

int readSensor(int pin) {
  long sum = 0;
  for (int i = 0; i < 10; i++) {
    sum += analogRead(pin);
    delay(5);
  }
  return sum / 10;
}

void setup() {
  Serial.begin(115200);

  pinMode(flamePin, INPUT);
  pinMode(buzzerPin, OUTPUT);

  dht.begin();

  Serial.println("System Started...");
}

void loop() {
  int mq7 = readSensor(mq7Pin);
  int mq5 = readSensor(mq5Pin);
  int mq135 = readSensor(mq135Pin);

  int flame = digitalRead(flamePin);

  float temp = dht.readTemperature();
  float hum = dht.readHumidity();

  Serial.println("---- SENSOR DATA ----");
  Serial.print("MQ7: "); Serial.println(mq7);
  Serial.print("MQ5: "); Serial.println(mq5);
  Serial.print("MQ135: "); Serial.println(mq135);
  Serial.print("Flame: "); Serial.println(flame);
  Serial.print("Temp: "); Serial.println(temp);
  Serial.print("Humidity: "); Serial.println(hum);

  // 🚨 Decision Engine

  if (flame == LOW && mq5 > 300) {
    Serial.println("🔥 FIRE HAZARD!");
    digitalWrite(buzzerPin, HIGH);
  }

  else if (mq7 > 370 && temp > 40) {
    Serial.println("🚨 TOXIC + HEAT RISK!");
    digitalWrite(buzzerPin, HIGH);
  }

  else if (mq5 > 20) {
    Serial.println("⚠️ GAS LEAK!");
    digitalWrite(buzzerPin, HIGH);
  }

  else if (mq135 > 360) {
    Serial.println("🌫️ POOR AIR QUALITY");
    digitalWrite(buzzerPin, HIGH);
  }

  else {
    digitalWrite(buzzerPin, LOW);
  }

  Serial.println("----------------------");
  delay(2000);
}
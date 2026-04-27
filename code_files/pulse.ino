int pulsePin = 27;      // Pulse sensor signal pin
int buzzerPin = 7;     // Buzzer pin

int threshold = 130;    // Set threshold value (adjust after testing)

void setup() {
  Serial.begin(115200);
  pinMode(buzzerPin, OUTPUT);
}

void loop() {
  int pulseValue = analogRead(pulsePin);

  Serial.print("Pulse Value: ");
  Serial.println(pulseValue);

  if (pulseValue < threshold) {
    digitalWrite(buzzerPin, HIGH);   // Buzzer ON
  } else {
    digitalWrite(buzzerPin, LOW);    // Buzzer OFF
  }

  delay(200);
}
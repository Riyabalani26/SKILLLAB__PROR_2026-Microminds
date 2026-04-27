# SKILL LAB PRATICAL HACKATHON

## Final Project README

> **Project Weight:** 100%  
> **Team Size:** 4/3 students  
> **Project Duration:** 8 hours  
> **Total Time Available:** 32 effort-hours per team  
> **Project Type:** Playful, interactive, technology-based experience

---

# Before you begin

## Fork and rename this repository

After forking this repository, rename it using the format:

`SKILLLAB_PROR-2026-TeamName`

### Example

`SKILLLAB_PROR-2026-AuroWizards`

Do not keep the default repository name.

---

# How to use this README

This file is your team’s **working project document**.

You must keep updating it throughout the build period.  
By the final review, this README should clearly show:

- your idea,
- your planning,
- your design decisions,
- your technical process,
- your build progress,
- your testing,
- your failures and changes,
- your final outcome.

## Rules

- Fill every section.
- Do not delete headings.
- If something does not apply, write `Not applicable` and explain why.
- Add images, screenshots, sketches, links, and videos wherever useful.
- Update task status and weekly logs regularly.
- Use this file as evidence of process, not only as a final report.

---

# 1. Team Identity

## 1.1 MICROMINDS

`Project^2`

## 1.2 Team Members

| Name           | Primary Role                    | Secondary Role | Strengths Brought to the Project |
| -------------- | ------------------------------- | -------------- | -------------------------------- |
| Riddhi Jhadhav | `[Designing ]`       |`[sensors/hardware]`|   `[diagram,ppt]`
| Jui Adke  | `[Electronics / Integration]`   | `[Coding]`     | `[ Hardware,integration` ]   |
| Riya Balani |     ` [ Documentation  ] ` | `[system design] `| `[Material handling,hardware] `|
| Ayush Koli|    `[Electronics / testing] `            | `[Coding]  ` |`[coding,hardware]`
## 1.3 Project Title : "Rakshak Smart Safety Network"


<img width="1600" height="1131" alt="image" src="https://github.com/Riyabalani26/SKILLLAB__PROR_2026-Microminds/blob/main/images/Microminds%20team%20members.jpeg" />

## 1.4 One-Line Pitch

“An intelligent safety system that not only detects hazards but understands human presence and condition to respond with the right level of emergency action.”


## 1.5 Expanded Project Idea

In 1–2 paragraphs, explain:

- what your project is,
- what kind of experience it creates,
- what technologies are involved.

**Response:**  
This project is a multi-sensor safety system designed to detect and respond to real-world hazards in a smarter way than traditional alarms. It continuously monitors environmental conditions like gas leaks, fire, temperature, and hazard detection, and uses a decision engine to verify threats instead of reacting to a single trigger. It has a special innovation that it senses integration of human awareness—by tracking pulse and presence, the system can determine whether someone is actually in danger and adjust its response accordingly.
The system creates an experience of intelligent, responsive safety rather than just triggering alarm, the system evaluates the severity of a situation and responds with appropriate actions like triggering alerts, controlling ventilation, or escalating to emergency-level warnings. It combines embedded hardware (Raspberry Pi Pico),analog and digital sensors (MQ series, DHT11, PIR, flame, pulse), and communication technologies such as Bluetooth, all working together through a structured logic system that enables real-time monitoring and intelligent decision-making.

---

# 2. Philosophy Fit

## 2.1 Experience, Not Social Problem

This module does **not** require your project to solve a large social problem.

You are allowed to build:

- toys,
- games,
- interactive objects,
- playful machines,
- kinetic artifacts,
- humorous devices,
- strange but delightful experiences,
- things that are entertaining to use or watch.



# 3. Inspiration

## 3.1 References

List what inspired the project.

| Source Type | Title / Link                                                        | What Inspired You                                                                         |
| ----------- | ------------------------------------------------------------------- | ----------------------------------------------------------------------------------------- |
| `[Video]`   | `https://www.instagram.com/reel/DW4CT7WCDry/?igsh=cXg3dzAxYmdncDBo` | `How projection mapping can be used to create interactive digital + physical experiences` |
|             |                                                                     |                                                                                           |
|             |                                                                     |                                                                                           |

## 3.2 Original Twist

What makes your project original?

**Response:** 
Most safety systems stop at detecting the hazard, but hazards only matter because of how they affect the human body—and that part is usually ignored. For example, gas leaks reduce oxygen and can cause dizziness or unconsciousness, fire and heat can lead to burns or breathing issues, and smoke can quickly damage the lungs. The severity of these effects depends on whether a person is present and how their body is reacting in that moment.
What makes this project special is that it adds human awareness to hazard detection. By monitoring pulse along with presence, the system doesn’t just detect danger—it checks if the human body is actually under stress. This allows it to distinguish between a general warning and a real emergency, making the response smarter, more accurate, and far more meaningful.



---

# 4. Project Intent

## 4.1 User Journey 

Describe exactly how a user will use the project.Make it a story
**Response:**  
Ravi, a factory supervisor, starts his shift and activates the Rakshak Smart Safety Network using the control panel. The system begins monitoring the environment in real time, checking for gas leaks, fire, temperature changes, and human presence.

As Ravi works nearby, the system detects a slight gas leak through the MQ sensor. Instead of immediately triggering a false alarm, it cross-verifies the data with temperature and flame sensors. Since the temperature is normal and no fire is detected, the system classifies it as a gas leak and sends a low-priority alert.

Later, the situation becomes critical when both gas levels and temperature rise rapidly, and the flame sensor is triggered. At the same time, the system detects Ravi’s presence and monitors his pulse. When it identifies an abnormal heart rate, it escalates the situation to a high-priority emergency.

Immediately, an alarm is triggered, alerts are sent to the concerned authorities via the bluetooth module(on phone), and the ventilation system is activated to release harmful gases.                                        
                                                



---

# 5. Definition of Success

## 5.1 Definition of “Usable”



## 5.2 Minimum Usable Version

What is the smallest version of this project that still delivers the core experience?

**Response:**  


## 5.3 Stretch Features

What features are nice to have but not essential?


---

# 6. System Overview

## 6.1 Project Type

Check all that apply.

- [x] Electronics-based

- [ ] Mechanical

- [x] Sensor-based

- [x] App-connected

- [x] Motorized

- [ ] Sound-based

- [x] Light-based

- [x] Screen/UI-based

- [x] Fabricated structure

- [x] Game logic based

- [x] Installation

- [ ] Other:

## 6.2 High-Level System Description

Explain how the system works in simple terms.

Include:

- input,
- processing,
- output,
- physical structure,
- app interaction if any.

**Response:**  

## 6.3 Input / Output Map

| System Part                              | Type            | What It Does                                                               |


---

# 7. Sketches and Visual Planning

## 7.1 Concept Sketch

Add an early sketch of the full idea.

**Insert image below:**  
`[Upload image and link here]`

Example:

```md

```



## 7.2 Labeled Build Sketch

Add a sketch with labels showing:

- structure,
- electronics placement,
- user touch points,
- moving parts,
- output elements.

**Insert image below:**  

<img width="1600" height="1200" alt="image" src="https://github.com/Riyabalani26/SKILLLAB__PROR_2026-Microminds/blob/main/images/block%20diagram.jpeg" />

## 7.3 Approximate Dimensions

| Dimension        | Value   |
| ---------------- | ------- |
| Length           | `20 cm` |
| Width            | `10 cm` |
| Height           | `10 cm`  |
| Estimated weight | `400 g` |

---

# 8. Electronics Planning

## 8.1 Electronics Used

| Component                 | Quantity | Purpose                               |
| ------------------------- | --------:| ------------------------------------- |
| `[Raspberry Pi Pico]`     | `2`      | `[Main controller]`                   |
| `[DHT 11]`    | `1`      | `[Temprature sensor]`                    |
| `[HC-05 Blutooth module]`             | `1`      | `[Bluetooth connection with external device]`                     |
| `[PPG PULSE sensor]`        | `1`      | `[detects pulse rate]`                       |
| `[3.7v battery]`               |   `2`   |    `[charge the system]`     |
| `[MQ 4]`             |    `1` | `[Detects methane]`                 |
| `[MQ 5]` | `1`      | `[Detects LPG/hydrogen/natural gas]` |
| `[MQ 7]`  | `1`    |    `[Detects carbon monoxide]`|
|  `[MQ 135]` | `1` |   `[Detecs hazard gases]`  |
|  `[Buzzer]`  | `1`|      `[alert system]`      |
| `[LM3 93]`   | `1` |   `[Senses flame]`|
|   
## 8.2 Wiring Plan

Describe the main electrical connections.

**Response:**  
The Raspberry Pi Pico acts as the central controller and is interfaced with multiple sensors and actuators to implement a multi-layer safety and monitoring system.

Three MQ-series gas sensors (MQ-7, MQ-5, and MQ-135) are connected via their analog output pins (AO) to the Pico’s ADC pins (GP26, GP27, and GP28 respectively) to monitor variations in gas concentration. These sensors are powered using the 5V VBUS pin, and all share a common ground. No pull-up resistors are required as they provide analog outputs.

The flame detection unit based on the LM393 flame sensor module is connected using its digital output (DO) to GPIO GP14, enabling real-time flame detection. The module includes an onboard comparator and pull-up circuitry, so no external pull-up resistor is required.

An infrared (IR) sensor is connected to GPIO GP17 to detect object presence or intrusion. Since most IR modules include internal signal conditioning and pull-up resistors, no external pull-up is required.

The ultrasonic sensor (HC-SR04) is interfaced using two GPIO pins: TRIG connected to GP18 and ECHO connected to GP19. As the ECHO pin outputs 5V logic, a voltage divider using two resistors is implemented to step down the signal to 3.3V before connecting to the Pico input pin.

The environmental sensing module, DHT11, is connected to GP16 using a single-wire digital communication interface. A 10kΩ pull-up resistor is connected between the DATA pin and VCC to ensure reliable communication and stable logic levels.

An active buzzer is connected to GPIO GP15, where the positive terminal is driven by the GPIO pin and the negative terminal is connected to ground, enabling audible alerts during hazardous conditions. A current-limiting resistor may be added if required.

Optionally, a Bluetooth module (HC-05) is connected via UART communication, where TX is connected to GP1 and RX is connected to GP0 through a voltage divider, ensuring safe voltage levels for the module.

All components share a common ground, ensuring proper reference voltage and stable system operation across all module

## 8.3 Circuit Diagram

Insert a hand-drawn or software-made circuit diagram.

**Insert image below:**  
`[Upload image and link here]`
<img width="867" height="1156" alt="" src="" />


# 9. Power Plan

| Question         | Response                                                                                                                                          |
| ---------------- | ------------------------------------------------------------------------------------------------------------------------------------------------- |
| Power source     | `Main system: 5V DC adapter. Pulse system: 3.7V flat Li-ion battery`                                                                                                                           |
| Voltage required | `Main system uses stable 5V input. Pulse unit uses 3.7V battery with regulated output for controller`                                                                  |
| Current concerns | `MQ sensor and buzzer may draw higher current in main unit. Pulse unit needs stable battery supply for reliable sensing`                                       |
| Safety concerns  | `Avoid short circuits, prevent battery over-discharge, secure wearable wiring` |

---

# 10. Software Planning

## 10.1 Software Tools

| Tool / Platform                | Purpose                                        |
| ------------------------------ | ---------------------------------------------- |
| `[MicroPython]`                | `Control ESP32`                                |
| `[Python/PyGame/OpenCV]`       | `Track markers, game logic, create projection` |
| `[Fusion/Blender/Illustrator]` | `[Prototyping structure]`                      |
|                                |                                                |

## 10.2 Software Logic

Describe what the code must do.

Include:

- startup behavior,
- input handling,
- sensor reading,
- decision logic,
- output behavior,
- communication logic,
- reset behavior.

**Response:**  
`

- **Startup behavior:**  
  The ESP32 initializes motor pins, PWM control, and starts a WiFi access point with a web server. The laptop initializes camera input, tracking system, and projection mapping.
- **Input handling:**  
  Movement commands are received from the laptop (pygame sends http requests)
- **Sensor reading:**  
  The camera continuously captures frames, and OpenCV detects ArUco markers to determine the car’s position and orientation.
- **Decision logic:**  
  The system maps the car’s position into a virtual coordinate system and checks for nearby obstacles or collisions. If movement is valid, the command is allowed; if not, it is blocked or replaced with a feedback action (like a slight shake).
- **Output behavior:**  
  The ESP32 drives the motors using PWM signals to control speed and direction. The projector displays the updated game environment, including obstacles, targets, and feedback visuals.
- **Communication logic:**  
  The laptop sends HTTP requests (e.g., `/forward`, `/left`) to the ESP32 over WiFi. The ESP32 parses these commands and executes motor actions.
- **Reset behavior:**  
  If no command is received within a short timeout, the ESP32 stops the motors. The game resets when a level is completed or restarted.`

## 10.3 Code Flowchart

Insert a flowchart showing your code logic.

Suggested sequence:

- start,
- initialize,
- wait for input,
- read input,
- decision,
- trigger output,
- repeat or reset,
- error handling.

**Insert image below:**  
<img width="1600" height="1200" alt="image" src="" />
<img width="1600" height="1200" alt="image" src="" />




# 11. Bill of Materials

## 11.1 Full BOM

| Item                             | Quantity | In Kit? | Need to Buy? | Estimated Cost | Material / Spec               | Why This Choice?          |
| -------------------------------- | --------:| ------- | ------------ | --------------:| ----------------------------- | ------------------------- |
| `[Raspberry Pi Pico]`                        | `[1]`      | `Yes`   | `No`         | `380`            | `RP2350, dual-core 150MHz, 520KB SRAM, 4MB Flash, 3.3V GPIO`                | `[To control all sensors and process data efficiently]` |
| `[MQ series]`                 | `[1]`    | `[Yes]` | `[No]`       | `300`            | `[5V gas sensor module, analog/digital output, smoke/LPG/CO detection]`                     | `[MQ5 - LPG, methane   MQ7 - Detects CO, MQ135 - smoke and other gas detection. ]`  |
| `[Adapter]`          | `[1]`    | `[Yes]`  | `[No]`      | `[250]`        | `[5V DC adapter]` | `[To provide stable continuous power to main system]`    |
| `[Buzzer]`               | `[1]`    | `[Yes]`  | `[No]`      | `[40]`         | `[-]`                               |                           |
| `[pulse sensros]` | `[1]`    | `[Yes]`  | `[No]`      | `[270]`        |         `[Heartbeat sensor, analog output, 3V–5V supply, used to measure pulse rate.]`                      |     `[low cost, compact, easy to use with rp2040 ]`                        |
| `[Bluetooth module]`| `[1]`  | `[Yes]`  | `[NO]`    | `[300]`  | `[Bluetooth UART module, 5–10 m range, 3.6–6V supply.]` |  `[low cost, simple UART interface ]`
|`[Fire sensor]`| `[1]`  | `[Yes]`  | `[NO]`    | `[120]`  | `[ IR flame sensor, LM393 comparator, adjustable sensitivity]` |   `[compact size, 3-4 pin with rp, very fast response on fire
]`
## 11.2 Material Justification

Explain why you selected your main materials and components.

**Response:**  
`DC motors (BO motors) were chosen instead of servos or steppers because the system requires continuous rotation for movement rather than precise angular control (Previously, we were considering using steppers as we were planning on tracking movement on the ESP using its relative position from an origin, but since we're using a camera now, this is not required). A motor driver (L298N) was used to allow bidirectional control and speed variation using PWM.`


## 11.3 Items You chose

| Item                 | Why Needed               | Purchase Link | Latest Safe Date to Procure | Status       |
| -------------------- | ------------------------ | ------------- | --------------------------- | ------------ |
| `BO Motors + Wheels` | `Drive system for car`   | `robu.in`     | `15th April`                | `[Received]` |
| `Buck Converter`     | `Stable power for ESP32` | `local store` | `before testing`            | `[Received]` |
| `Li-ion Batteries`   | `Portable power`         | `local store` | `before testing`            | `Recieved`   |

## 11.4 Budget Summary

| Budget Item           | Estimated Cost              |
| --------------------- | ---------------------------:|
| Electronics           | `[400]`                     |
| Mechanical parts      | `[200]`                     |
| Fabrication materials | `[0 (Available on campus)]` |
| Purchased extras      | `[0]`                       |
| Contingency           | `[300]`                     |
| **Total**             | `[900]`                     |

## 11.5 Budget Reflection

If your cost is too high, what can be simplified, removed, substituted, or shared?

**Response:**  

---

# 12. Planning the Work

## 12.1 Team Working Agreement

Write how your team will work together.

Include:

- how tasks are divided,
- how decisions are made,
- how progress will be checked,
- what happens if a task is delayed,
- how documentation will be maintained.

**Response:**  


## 12.2 Task Breakdown

| Task ID | Task                    | Owner    | Estimated Hours | Deadline     | Dependency | Status |
| ------- | ----------------------- | -------- | ---------------:| ------------ | ---------- | ------ |
| T1      | `[Finalize concept]`    | `[Both]` | `2`             | `1st April`  | `None`     | `Done` |


## 12.3 Responsibility Split

| Area                 | Main Owner | Support Owner |
| -------------------- | ---------- | ------------- |
| Concept              | `[JUI]`       |      `[RIDDHI,RIYA,AYUSH]`    |
| Electronics          | `[JUI]`       | `[AYUSH]`     |
| Coding               | `[JUI]`       | `[AYUSH]`     |
| Mechanical build     | `[RIDDHI]`       | `[RIYA]`    |
| Testing              | `[AYUSH]`       | `[JUI]`    |
| Documentation        | `[RIYA]`       | `[AYUSH]`     |

---

# 13. 2 hour Milestones

## 13.1 8-hour Plan

### Bi Hour 1 — Plan and De-risk

Expected outcomes:

- [x] Idea finalized
- [x] Core interaction decided
- [ ] Sketches made
- [x] BOM completed
- [x] Purchase needs identified
- [ ] Key uncertainty identified
- [x] Basic feasibility tested

### Bi Hour 2 — Build Subsystems

Expected outcomes:

- [x] Electronics tests completed
- [x] CAD / structure planning completed
- [ ] App UI started if needed
- [x] Mechanical concept tested
- [x] Main subsystems partially working

### Bi Hour 3 — Integrate

Expected outcomes:

- [x] Physical body built
- [x] Electronics integrated
- [x] Code connected to hardware
- [ ] App connected if required
- [x] First playable version exists

### Bi Hour 4 — Refine and Finish

Expected outcomes:

- [x] Technical bugs reduced
- [x] Playtesting completed
- [x] Improvements made
- [x] Documentation completed
- [x] Final build ready

## 13.2  Update Log

| HOUR   | Planned Goal   | What Actually Happened | What Changed   | Next Steps     |
| ------ | -------------- | ---------------------- | -------------- | -------------- |
| Hour 1 | `[Idea finalization]` | `[Finalized ideas and features]`  | `[Added human safety (pulse) concept]` | `[Started component selection]` |
| Hour 2 | `[Documentation]` | `[Team name,geotag photo,team member details]`         | `[NA]` | `[Testing of components]` |
| Hour 3 | `[testing-1]` | `[Connected basic sensors and tested outputs]`         | `[Adjusted wires n pins]` | `[Integrate remaining sensors]` |
| Hour 4 | `[Documentation]` | `[project description and component list]`         | `[-]` | `[block daigrams]` |
| Hour 5 | `[Logic development]` | `[Developed basic decision conditions]`         | `[Write here]` | `[Write here]` |
| Hour 6 | `[Integration]` | `[Combined sensors, logic, and automation]`         | `[Fixed communication delays]` | `[Begin alert system setup]` |
| Hour 7| `[Communication]` | `[Implemented Bluetooth/Wi-Fi alerts]`         | `[Modified alert triggers]` | `[Perform system testing]` |
| Hour 7 | `[Documentation]` | `[Wiring plan and circuit daigram]`         | `[Write here]` | `[Write here]` |
| Hour 8 | `[Testing]` | `[Tested system under different scenarios]`         | `[Reduced false alarms]` | `[Optimize performance]` |
| Hour 9 | `[Final refinement]` | `[Debugged and stabilized system]`         | `[Improved response time]` | `[Prepare documentation & demo]` |
| Hour 9 |  `[Documentation]` | `[filled testing n debuggin log ]`         | `[Write here]` | `[Write here]` |

---

# 14. Risks and Unknowns

## 14.1 Risk Register

| Risk                                                            | Type         | Likelihood | Impact   | Mitigation Plan                                                                       | Owner                |
| --------------------------------------------------------------- | ------------ | ---------- | -------- | ------------------------------------------------------------------------------------- | -------------------- |
| WiFi connection between laptop and ESP32 becomes unstable       | `Technical`  | `Medium`   | `High`   | Keep ESP32 close, ensure stable power supply, reduce network load, add fail-safe stop | `[Gopal]`           |


## 14.2 Biggest Unknown Right Now

What is the single biggest uncertainty in your project at this stage?

**Response:**  


---

# 15. Testing 

## 15.1 Technical Testing Plan

| What Needs Testing     | How You Will Test It                                                                 | Success Condition                                                                                    |
| ---------------------- | ------------------------------------------------------------------------------------ | ---------------------------------------------------------------------------------------------------- |
| `[Wifi connection]`    | `[Check if motor spins via app button]`                                              | `[Both motors accurately respond to wifi signals]`                                                   |
                       |
## 15.2 Testing and Debugging Log

| Date          | Problem Found                         | Type         | What You Tried                                | Result               | Next Action                                    |
| ------------- | ------------------------------------- | ------------ | --------------------------------------------- | -------------------- | ---------------------------------------------- |
| `27th April`  | `Analog value of MQ sensor kept changing`          | `Mechanical` | `we gave a dynamic baseline` | `improvement`             | `improve structure`      |
| `27th April`  | `we were not able to work with 4 MQ sensors`|     `Mechanical` |   `we used only 3 sensors becuase pico has only 3 ADC pins` |

## 15.3 Playtesting Notes

| Tester      | What They Did                        | What Confused Them                    | What They Enjoyed                         | What You Will Change                          |
| ----------- | ------------------------------------ | ------------------------------------- | ----------------------------------------- | --------------------------------------------- |
| `Gopal` | `Tried navigating through obstacles` | `Some obstacles ewren't clear enough` | `Liked projection + real car interaction` | `Add a slight red highlight around obstacles` |


---

# 16. Build Documentation

## 16.1 Fabrication Process

Describe how the project was physically made.

Include:

- cutting,
- 3D printing,
- assembly,
- fastening,
- wiring,
- finishing,
- revisions.

**Response:**  
`The fabrication process involved designing, manufacturing, assembling, and refining both the physical structure and electronic integration of the system.`

`Design (CAD Modeling):
The initial model was created using CAD software, where components were designed based on the actual dimensions of the electronic parts. This ensured accurate fitting and minimized errors during assembly.
Cutting (Laser Cutting):
The designed parts were fabricated using laser cutting techniques. Sheets were cut precisely according to the CAD model to create the structural base and mounts for components.`

`Components were fixed using adhesives and mechanical supports. Certain parts were intentionally kept modular (not permanently fixed) to allow easy replacement and modification of electronics.
Surface Finishing:
Some parts were sanded to smooth rough edges after cutting. Sawdust mixed with adhesive was used to fill gaps and uneven edges, improving structural finish. The final structure was then painted for better aesthetics and durability.`

`Environment Setup (Dark Room Fabrication):
To enhance projection visibility, a controlled dark environment was created using Z-boards, paper sheets, and bedsheets. This minimized external light interference and improved projection clarity.
Revisions and Iterations:
Multiple adjustments were made throughout the process, including refining alignment, improving structural stability, repositioning components, and optimizing the interaction between the physical car and projected environment.`

## 16.2 Build Photos

Add photos throughout the project.

Suggested images:

- early sketch,
- prototype,
- electronics testing,
- mechanism test,
- app screenshot,
- final build.
- <img width="960" height="1280" alt="https://github.com/Riyabalani26/SKILLLAB__PROR_2026-Microminds/blob/main/images/hardware.jpeg" />
- <img width="960" height="1280" alt="
SKILLLAB__PROR_2026-Microminds/images/pulse sensor.jpeg at main · Riyabalani26/SKILLLAB__PROR_2026-Microminds
" />
- <img width="960" height="1280" alt="SKILLLAB__PROR_2026-Microminds/images/WhatsApp Image 2026-04-27 at 4.42.56 PM.jpeg at main · Riyabalani26/SKILLLAB__PROR_2026-Microminds" />





# 17. Final Outcome

## 17.1 Final Description

Describe the final version of your project.

**Response:**  


## 17.2 What Works Well



## 17.3 What Still Needs Improvement


## 17.4 What Changed From the Original Plan

How did the project change from the initial idea?

**Response:**  


---

# 18. Reflection

## 18.1 Team Reflection

What did your team do well?  
What slowed you down?  
How well did you manage time, tasks, and responsibilities?

**Response:**  
The main part of the project was to integrate the components properly which our team managed well through this project. The pulse system part was also handled well by our teammates. The Bluetooth was a bit of confusion and hard for testing which slowed down our progress. Also the designing part was a bit complicated we were stuck that how we can manage all components to be placed in one box. The tasks were already distributed after 30 mins after the project started. The time management was quite decent by our teammates and tasks assigned to each of them were done perfectly.


## 18.2 Technical Reflection

What did you learn about:

- electronics,
- coding,
- mechanisms,
- fabrication,
- integration?

**Response:**  
We learnt a lot of things from the short hackathon conducted. We got to learn more about the MQ sensors as we didn't had the knowledge that how many Mq gas sensors are in the market.there were more sensors that we learnt about pulse sensor, LM393 fire sensor, DHT11. We also got to learn about the Bluetooth module and how it works with the application called as Bluetooth serial communication. The integration part was fun and also there were certain decisions that we made but deleting or not to include particular sensor as per the GPIO pins in shrike lite due to which we learn that not all products and projects should have many sensors and how to manage components  using the specific microcontroller board.



## 18.3 Design Reflection

What did you learn about:

- designing ,
- delight,
- clarity,
- physical interaction,
- understanding,
- iteration?

**Response:**  
The designing part was challenging because we had limited materials available. However, building a complete system with the components we had was a valuable experience. It taught us to think creatively and use resources wisely.The most important factor was that we had clarity about the product we wanted to build. Because of this, we were able to choose suitable components and stay focused during development.Working with our teammates was also a good learning experience. It taught us collaboration, communication, and problem-solving during hardware integration. We also understood how users would interact with wearable pulse monitoring and wall-mounted safety systems.Overall, this project taught us that with clear planning, teamwork, and creative thinking, limited resources can still create an effective solution.


## 18.4 If You Had One More hour

What would you improve next?

**Response:**  
If we had one more hour, we would first arrange all the loose wiring properly and fix the sensors strongly so no connection issue comes during demo. We would calibrate the MQ gas sensor and pulse sensor for getting more accurate readings. We would set proper threshold values for fire, gas and pulse alerts so buzzer only activates in real danger condition. We would also improve the Bluetooth mobile display by showing more clear labels and warning messages. We could have also created a better web server which broadcast the live sensor data for remote monitoring. Lastly, we would test the full system again in real conditions to check all sensors and alerts are working smoothly.

` `

---

# 19. Final Submission Checklist

Before submission, confirm that:

- [x] Team details are complete
- [x] Project description is complete
- [x] Inspiration sources are included
- [x] Sketches are added
- [x] BOM is complete
- [x] Purchase list is complete
- [x] Budget summary is complete
- [x] Mechanical planning is documented if applicable
- [ ] App planning is documented if applicable
- [x] Code flowchart is added
- [x] Task breakdown is complete
- [x] Weekly logs are updated
- [x] Risk register is complete
- [x] Testing log is updated
- [x] Playtesting notes are included
- [x] Build photos are included
- [x] Final reflection is written
<img width="1131" height="1600" alt="image" src="" />

---


---



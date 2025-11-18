# MQ-2 Gas and Smoke Alarm System – Arduino

## Project Overview

This project aims to build a mini safety alarm system for home or office environments using an Arduino and an MQ-2 gas/smoke sensor.

When the gas or smoke level in the environment exceeds a defined threshold:

- The red LED turns on  
- The passive buzzer produces a siren sound  

Sensor sensitivity has been enhanced, and a realistic alarm effect is created using a passive buzzer. The project provides essential embedded systems experience in both hardware and software.

## Components Used

- Arduino Uno  
- MQ-2 Gas and Smoke Sensor  
- Passive Buzzer  
- LED  
- Resistors (220Ω, etc.)  
- Jumper wires  
- Breadboard  

## Circuit Connections

- **MQ-2 Sensor**
  - VCC → 5V  
  - GND → GND  
  - A0 → A0  

- **LED**
  - Long leg (anode +) → D8  
  - Short leg (cathode –) → 220Ω resistor → GND  

- **Passive Buzzer**
  - – → GND  
  - Middle pin → 5V  
  - S (Signal) → D9  

## Arduino Code

Code file: `MQ2_Gas_Alarm.ino`

## Learning Outcomes

- Integrating sensors with Arduino  
- Filtering analog sensor data (averaging)  
- Designing a threshold-based alarm system  
- Documenting a project professionally on GitHub  

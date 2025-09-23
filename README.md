# Arduino Basics Projects

This repository contains beginner-friendly Arduino projects that I also share on my TikTok channel.  
Each project has:
- ✅ Arduino code (`.ino`)
- ✅ Circuit design (TinkerCad screenshot)

---

## 📚 Projects

### 1. Blink
- The "Hello World" of Arduino.
- An LED connected to Pin 13 blinks on and off.
- Components: Arduino Uno, 1x LED, 1x 330Ω resistor, 2x jumper wires.  

👉 [View Project Folder](./Blink)

### 2. LED Lighting With Button
- First interactive project with Arduino.
- Pressing a button lights up an LED, releasing it turns it off.
- Components: Arduino Uno, 1x LED, 1x button, 1x 330Ω resistor (for LED), 5x jumper wires.
- Circuit: LED on Pin 8, Button on Pin 10 (with `INPUT_PULLUP`).
- Why `INPUT_PULLUP`?  
  By default, a pin without a signal can "float" between HIGH and LOW, causing random results.  
  `INPUT_PULLUP` uses Arduino’s internal resistor to keep the pin stable (default HIGH).  
  When the button is pressed, it connects the pin to GND → the reading becomes LOW.
  
👉 [View Project Folder](./LedLightingWithButton)

### 3. Traffic Light
- Simulates a basic traffic light system with 3 LEDs.
- LEDs light up in sequence: green → yellow → red → repeat.
- Components: Arduino Uno, 1x Red LED, 1x Yellow LED, 1x Green LED, 3x 330Ω resistors, 7x jumper wires, 1x breadboard.
- Circuit: Red LED on Pin 11, Yellow LED on Pin 10, Green LED on Pin 9 (all with resistors), cathodes connected to GND.
- Purpose: Demonstrates controlling multiple outputs and using delays for timing.
👉 [View Project Folder](./TrafficLight)
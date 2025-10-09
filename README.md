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
- LEDs light up in sequence: red → yellow → green → repeat.
- Components: Arduino Uno, 1x Red LED, 1x Yellow LED, 1x Green LED, 3x 330Ω resistors, 7x jumper wires, 1x breadboard.
- Circuit: Red LED on Pin 11, Yellow LED on Pin 10, Green LED on Pin 9 (all with resistors), cathodes connected to GND.
- Purpose: Demonstrates controlling multiple outputs and using delays for timing.

👉 [View Project Folder](./TrafficLight)

### 4. Potentiometer LED Brightness
- Control LED brightness using a potentiometer.
- Potentiometer works as a variable resistor: turning the knob changes the voltage on its middle pin.
- Arduino reads this value as analog input (0–1023) and maps it to LED brightness (0–255).
- Components: Arduino Uno, 1x LED, 1x 330Ω resistor, 1x potentiometer (10kΩ), 5x jumper wires, 1x breadboard.
- Circuit: Potentiometer middle pin → A0, side pins → 5V & GND. LED anode → Pin 9 with resistor, cathode → GND.
- Purpose: Introduces analog input with analogRead() and PWM output with analogWrite().

👉 [View Project Folder](./PotentiometerLEDBrightness)

### 5. Knight Rider LEDs
- LEDs light up one by one from left to right, then back again (like the Knight Rider car).
- Uses arrays, `for` loops, and `sizeof` to calculate the number of LEDs automatically.
- Components: Arduino Uno, 5x LEDs, 5x 330Ω resistors, 11x jumper wires, 1x breadboard.
- Circuit: LEDs connected to pins 3–7 (with resistors). Cathodes to GND.
- Purpose: Demonstrates how to manage multiple outputs efficiently with arrays.
- **Key concept: `sizeof`**  
Instead of hardcoding the array length, we calculate it dynamically:  

👉 [View Project Folder](./KnightRider)

### 6. LED Dice
- Press run → Arduino simulates a dice roll using 6 LEDs.
- The LEDs first “animate” quickly, then stop on a random LED to show the result.
- Components: Arduino Uno, 6x LEDs, 6x 330Ω resistors, jumper wires, breadboard.
- Circuit: LEDs connected to pins 2–7 (with resistors). Cathodes connected to GND.

**Key concepts used:**
- `sizeof()` → calculates the number of LEDs automatically from the array.
- `random()` → generates a number between 1–6 for the dice result.
- `randomSeed(analogRead(0))` → seeds the random generator with noise from an unused analog pin, ensuring different results every reset.
  - Without `randomSeed()`, Arduino’s `random()` produces the same sequence each time the board restarts.
  - Using a floating analog pin gives unpredictable values to make the dice fair.

**How it works:**
1. LEDs animate in sequence with decreasing delay → looks like a dice rolling.
2. A random number from 1–6 is chosen.
3. The LED corresponding to that number lights up for 1.5 seconds.
4. The LED turns off → ready for the next roll.

👉 [View Project Folder](./Dice)

### 7. Servo With Potentiometer
- Control a servo motor angle using a potentiometer.
- Potentiometer gives analog values (0–1023). Arduino maps these values to servo angles (0–180°).
- Components: Arduino Uno, 1x Servo (SG90), 1x 10kΩ potentiometer, jumper wires, breadboard.
- Circuit:
  - Pot middle pin → A0.
  - Pot sides → 5V & GND.
  - Servo signal → Pin 9.
  - Servo VCC → 5V.
  - Servo GND → GND.
- Purpose: Introduces the Servo library, analog input with `analogRead()`, and mapping values with `map()`.

**Key concept: `map()`**
- Converts a number from one range to another.
- Example: `map(value, 0, 1023, 0, 180)` → turns potentiometer readings into servo angles.

👉 [View Project Folder](./ServoMotor)

### 8. Automatic Night Light
- Automatically turns an LED **ON when it’s dark** and **OFF when it’s bright** using an **LDR (Light Dependent Resistor)**.  
- Uses a **voltage divider** circuit to measure light intensity with the Arduino’s analog input.  
- **Components:** Arduino Uno, 1x LDR (photoresistor), 1x 10kΩ resistor, 1x LED, 1x 220Ω resistor, jumper wires, breadboard.  
- **Circuit:**  
  - LDR → between **5V** and **A0**  
  - 10kΩ resistor → between **A0** and **GND**  
  - LED anode → **Pin 9**  
  - LED cathode → **GND** (through 220Ω resistor)

**Key concepts used:**
- **Voltage Divider** → divides voltage between two resistors so Arduino can sense light level.  
- **analogRead()** → reads light intensity as a value between 0–1023.  
- **digitalWrite()** → turns LED ON/OFF depending on the light level.

**How it works:**
1. Arduino reads the analog voltage from the LDR.  
2. If the value is below a threshold (meaning it’s dark), the LED turns **ON**.  
3. If the value is above the threshold (bright), the LED turns **OFF**.

👉 [View Project Folder](./AutoNightLight)




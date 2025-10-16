# Arduino Basics Projects

This repository contains beginner-friendly Arduino projects that I also share on my TikTok channel.  
Each project includes:
- ✅ Arduino code (`.ino`)
- ✅ Circuit design (TinkerCad screenshot)

---

## 📚 Projects

---

### 1. Blink 💡  
**A simple LED blink project — the “Hello World” of Arduino.**

**🧠 How It Works**  
Arduino turns the LED on and off with a short delay between each state. This introduces digital output and the `digitalWrite()` function.

**🧩 Components**
- Arduino Uno  
- LED (1x)  
- 330Ω resistor (1x)  
- Jumper wires (2x)

**⚙️ Pin Connections**
| Component | Arduino Pin |
|------------|--------------|
| LED (Anode) | 13 |
| LED (Cathode) | GND |

👉 [Watch the Video](https://www.youtube.com/shorts/z9_eAP-Q8zg)  
👉 [View Project Folder](./Blink)

---

### 2. LED Lighting With Button 🔘💡  
**Control an LED with a button using Arduino’s internal pull-up resistor.**

**🧠 How It Works**  
The button is connected using `INPUT_PULLUP`. The pin reads HIGH when unpressed and LOW when pressed. Arduino turns the LED on when the input reads LOW.

**🧩 Components**
- Arduino Uno  
- LED (1x)  
- Button (1x)  
- 330Ω resistor (1x, for LED)  
- Jumper wires (5x)

**⚙️ Pin Connections**
| Component | Arduino Pin |
|------------|--------------|
| LED (Anode) | 8 |
| Button | 10 (with `INPUT_PULLUP`) |
| LED (Cathode) | GND |

👉 [Watch the Video](https://www.youtube.com/shorts/3LjQrxnnY38)  
👉 [View Project Folder](./LedLightingWithButton)

---

### 3. Traffic Light 🚦  
**Simulates a three-light traffic signal using LEDs and delay timing.**

**🧠 How It Works**  
LEDs turn on in sequence: red → yellow → green → repeat. Demonstrates sequential control and timing with `delay()`.

**🧩 Components**
- Arduino Uno  
- Red, Yellow, Green LEDs  
- 330Ω resistors (3x)  
- Jumper wires (7x)  
- Breadboard (1x)

**⚙️ Pin Connections**
| Component | Arduino Pin |
|------------|--------------|
| Red LED | 11 |
| Yellow LED | 10 |
| Green LED | 9 |
| LED Cathodes | GND |

👉 [Watch the Video](https://www.youtube.com/shorts/AVkiNXyv-d8)  
👉 [View Project Folder](./TrafficLight)

---

### 4. Potentiometer LED Brightness 🎚️💡  
**Adjust LED brightness smoothly using a potentiometer.**

**🧠 How It Works**  
The potentiometer acts as a voltage divider. Arduino reads its analog value (0–1023) and maps it to LED brightness (0–255) using `analogWrite()` and `map()`.

**🧩 Components**
- Arduino Uno  
- LED (1x)  
- 330Ω resistor (1x)  
- 10kΩ potentiometer (1x)  
- Jumper wires (5x)  
- Breadboard (1x)

**⚙️ Pin Connections**
| Component | Arduino Pin |
|------------|--------------|
| Pot Middle Pin | A0 |
| Pot Sides | 5V & GND |
| LED (Anode) | 9 |
| LED (Cathode) | GND |

👉 [Watch the Video](https://www.youtube.com/shorts/3LjQrxnnY38)  
👉 [View Project Folder](./PotentiometerLEDBrightness)

---

### 5. Knight Rider LEDs 🚗✨  
**LEDs sweep back and forth, just like the Knight Rider car effect.**

**🧠 How It Works**  
Uses arrays and `for` loops to control multiple LEDs efficiently. The number of LEDs is calculated automatically with `sizeof()`.

**🧩 Components**
- Arduino Uno  
- LEDs (5x)  
- 330Ω resistors (5x)  
- Jumper wires (11x)  
- Breadboard (1x)

**⚙️ Pin Connections**
| Component | Arduino Pins |
|------------|---------------|
| LEDs (Anodes) | 3–7 |
| LEDs (Cathodes) | GND |

👉 [Watch the Video](https://www.youtube.com/shorts/NmfQXfB9BOk)  
👉 [View Project Folder](./KnightRider)

---

### 6. LED Dice 🎲💡  
**Roll a digital dice with LEDs lighting randomly to show a result.**

**🧠 How It Works**  
When triggered, LEDs animate quickly, then stop randomly on one to represent a dice roll.  
- `random()` picks a number between 1–6.  
- `randomSeed(analogRead(0))` ensures different outcomes every time.

**🧩 Components**
- Arduino Uno  
- LEDs (6x)  
- 330Ω resistors (6x)  
- Jumper wires  
- Breadboard

**⚙️ Pin Connections**
| Component | Arduino Pins |
|------------|---------------|
| LEDs (Anodes) | 2–7 |
| LEDs (Cathodes) | GND |

👉 [Watch the Video](https://www.youtube.com/shorts/4hf8laawVPo)  
👉 [View Project Folder](./Dice)

---

### 7. Servo With Potentiometer 🎚️⚙️  
**Control a servo motor’s rotation angle using a potentiometer.**

**🧠 How It Works**  
Arduino reads analog values from the potentiometer (0–1023) and maps them to servo angles (0–180°) with the `map()` function.

**🧩 Components**
- Arduino Uno  
- SG90 Servo (1x)  
- 10kΩ potentiometer (1x)  
- Jumper wires  
- Breadboard

**⚙️ Pin Connections**
| Component | Arduino Pin |
|------------|--------------|
| Pot Middle Pin | A0 |
| Pot Sides | 5V & GND |
| Servo Signal | 9 |
| Servo VCC | 5V |
| Servo GND | GND |

👉 [Watch the Video](https://www.youtube.com/shorts/SNZc4-IR3Oc)  
👉 [View Project Folder](./ServoMotor)

---

### 8. Automatic Night Light 🌙💡  
**LED turns ON when it’s dark and OFF when it’s bright using an LDR.**

**🧠 How It Works**  
The LDR (light-dependent resistor) and a 10kΩ resistor form a voltage divider. Arduino reads light levels through `analogRead()`. When the value drops below a threshold, the LED turns ON.

**🧩 Components**
- Arduino Uno  
- LDR (photoresistor)  
- 10kΩ resistor  
- LED  
- 330Ω resistor  
- Jumper wires  
- Breadboard

**⚙️ Pin Connections**
| Component | Arduino Pin |
|------------|--------------|
| LDR | Between 5V and A0 |
| 10kΩ Resistor | Between A0 and GND |
| LED (Anode) | 9 |
| LED (Cathode) | GND |

👉 [Watch the Video](https://www.youtube.com/shorts/gPUEkpnd1DU)  
👉 [View Project Folder](./AutoNightLight)

---

### 9. Parking Sensor 🚗🔊  
**Detects nearby objects using an ultrasonic sensor, LEDs, and a buzzer.**

**🧠 How It Works**  
The **HC-SR04** ultrasonic sensor measures distance. Depending on the result:  
- 🟢 Green LED → Safe distance  
- 🟡 Yellow LED → Getting close  
- 🔴 Red LED + Buzzer → Too close!

**🧩 Components**
- Arduino Uno  
- HC-SR04 Ultrasonic Sensor  
- Red, Yellow, Green LEDs  
- Piezo Buzzer  
- Jumper wires & Breadboard

**⚙️ Pin Connections**
| Component | Arduino Pin |
|------------|--------------|
| Trig | 7 |
| Echo | 6 |
| Green LED | 13 |
| Yellow LED | 12 |
| Red LED | 11 |
| Buzzer | 9 |

👉 [Watch the Video](https://www.youtube.com/shorts/pNzxYj9Xkfc)  
👉 [View Project Folder](./ParkingSensor)

# Arduino_Projects

A collection of Arduino projects built using Arduino Uno R3.
Each project is beginner-friendly with clear connections and code.

## 📁 Projects

### 1. LED Blink
**Components:** Arduino Uno, LED  
**Description:** Basic LED blink on Pin 7 — the "Hello World" of Arduino!  
**Connections:**
- LED + → Pin 7
- LED - → GND

---

### 2. Buzzer + LED Alarm
**Components:** Arduino Uno, Buzzer, LED  
**Description:** Buzzer and LED blink together simultaneously.  
**Connections:**
- Buzzer + → Pin 8
- Buzzer - → GND
- LED + → Pin 7
- LED - → GND

---

### 3. Distance Meter
**Components:** Arduino Uno, HC-SR04 Ultrasonic Sensor  
**Description:** Measures distance in cm and prints it on Serial Monitor.  
**Connections:**
- VCC → 5V
- GND → GND
- Trig → Pin 9
- Echo → Pin 10

---

### 4. Parking Sensor
**Components:** Arduino Uno, HC-SR04, Buzzer  
**Description:** Buzzer beeps faster as object gets closer — just like a car parking sensor!  
**Connections:**
- HC-SR04 VCC → 5V
- HC-SR04 GND → GND
- Trig → Pin 9
- Echo → Pin 10
- Buzzer + → Pin 8
- Buzzer - → GND

**Beep Logic:**
- 0–5 cm → Continuous beep 🔴
- 5–15 cm → Fast beep 🟠
- 15–30 cm → Slow beep 🟡
- 30+ cm → No beep 🟢

---

## 🛠️ Hardware Used
- Arduino Uno R3 (Clone)
- HC-SR04 Ultrasonic Sensor
- Active Buzzer
- LED
- Jumper Wires

---

## 👩‍💻 Author
**Vidhi**  
B.Tech ECE | Banasthali Vidyapith  

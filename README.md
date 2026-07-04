# 💧 Smart Water Level Monitoring and Alert System Using Arduino

## 📌 Overview

The **Smart Water Level Monitoring and Alert System** is an Arduino Uno-based project designed to monitor the water level of a tank in real time. The project is simulated in **Tinkercad** and uses a **potentiometer** as a virtual water level sensor.

The system displays the current water level and tank status on a **16×2 LCD**, while three LEDs indicate **Low**, **Medium**, and **Full** water levels. A **buzzer** alerts the user whenever the water level becomes critically low.

This project demonstrates how embedded systems can automate water monitoring and improve efficient resource management.

---

# 🎯 Objectives

- Design a smart water level monitoring system using Arduino Uno.
- Display water level information on a 16×2 LCD.
- Indicate water level status using LEDs.
- Provide an audible alert for low water levels.
- Simulate an automated water monitoring system in Tinkercad.

---

# 🛠 Components Used

| Component | Quantity |
|-----------|----------|
| Arduino Uno | 1 |
| 16×2 LCD Display | 1 |
| Potentiometer | 1 |
| Red LED | 1 |
| Yellow LED | 1 |
| Green LED | 1 |
| Buzzer | 1 |
| 220Ω Resistors | 3 |
| Breadboard | 1 |
| Jumper Wires | Multiple |

---

# 🔌 Circuit Connections

## LCD Connections

| LCD Pin | Arduino Pin |
|----------|-------------|
| RS | 12 |
| E | 11 |
| D4 | 5 |
| D5 | 4 |
| D6 | 3 |
| D7 | 2 |

### Additional Connections

- VSS → GND
- VDD → 5V
- VO → Potentiometer (LCD Contrast)

---

## Water Level Sensor

A potentiometer is used to simulate the water level sensor.

| Potentiometer Pin | Connection |
|-------------------|------------|
| Terminal 1 | 5V |
| Terminal 2 | GND |
| Middle Pin | A0 |

---

## LED Connections

| Indicator | Arduino Pin |
|------------|-------------|
| Red LED (Low) | 9 |
| Yellow LED (Medium) | 10 |
| Green LED (Full) | 13 |

Each LED is connected through a **220Ω resistor**.

---

## Buzzer

| Buzzer Pin | Arduino Pin |
|-------------|-------------|
| Positive | 8 |
| Negative | GND |

---

# ⚙️ Working Principle

The Arduino continuously reads the analog value from the potentiometer.

Based on the sensor reading, the system categorizes the tank into one of three levels.

---

## 🔴 Low Water Level

**Condition**

```
Water Level < 400
```

Actions:

- Red LED ON
- Buzzer ON
- LCD displays **LOW WATER**

---

## 🟡 Medium Water Level

**Condition**

```
400 ≤ Water Level < 700
```

Actions:

- Yellow LED ON
- Buzzer OFF
- LCD displays **MEDIUM LEVEL**

---

## 🟢 Full Water Level

**Condition**

```
Water Level ≥ 700
```

Actions:

- Green LED ON
- Buzzer OFF
- LCD displays **TANK FULL**

---

# 💻 Arduino Program

The complete Arduino code is available in:

```
Smart_Water_Level_Monitor.ino
```

---

# ▶️ Simulation

Developed and tested using **Tinkercad Circuits**.

Features include:

- LCD Display
- Water Level Monitoring
- Three-Level Indication
- Audible Low Water Alarm
- Real-Time Monitoring

---

# 📷 Output

Add screenshots of your Tinkercad simulation inside an **images** folder.

Example:

```
images/
    circuit.png
    output.png
```

---

# ✅ Advantages

- Real-time monitoring
- Prevents water shortage
- Low-cost implementation
- Easy to understand
- Educational project
- Audible and visual alerts
- Simple circuit design

---

# 🌍 Applications

- Residential water tanks
- Industrial storage tanks
- Agricultural irrigation
- Smart homes
- Water management systems
- Educational Arduino projects

---

# ⚠️ Limitations

- Uses a potentiometer instead of an actual water sensor.
- Cannot measure water volume directly.
- No wireless monitoring.
- Intended for simulation purposes.

---

# 🚀 Future Improvements

- Real water level sensors
- Automatic pump control
- ESP32 IoT integration
- Mobile application
- SMS and Email alerts
- Cloud monitoring
- Ultrasonic level measurement
- Solar-powered operation

---

# 📚 Learning Outcomes

Students will learn:

- Arduino programming
- LCD interfacing
- Analog sensor reading
- Embedded system design
- Alarm system implementation
- Tinkercad simulation

---

# 👩‍💻 Developed By

**Rabeea Anjum**

**Roll No:** 23-CSE-09

Department of Computer Systems Engineering

---

# 📄 License

This project is developed for educational purposes.

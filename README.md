# 🚀 Arduino RADAR System with Real-Time Visualization

## 📌 Project Overview
This project simulates a **RADAR system** using:
- Arduino UNO  
- Ultrasonic Sensor (HC-SR04)  
- Servo Motor (SG90 / MG90S)  
- Processing IDE (for visualization)  

👉 The servo sweeps from **15° → 190° and back**, while the ultrasonic sensor measures distances.  
👉 Data is sent to the **Serial Monitor** and visualized as a **green radar screen** in Processing IDE.  

---

## 🛠️ Components Used
- Arduino UNO  
- Ultrasonic Sensor (HC-SR04)  
- Servo Motor (SG90)  
- Jumper Wires + Breadboard  
- Processing IDE (for visualization)  
- USB Cable  

---

## ⚡ Features
- Real-time **servo + ultrasonic scanning**  
- Visualizes objects in a **radar-style interface**  
- Range up to **40 cm** (configurable)  
- Serial communication between Arduino & Processing  

---

## 💡 What I Learned
- Interfacing **Ultrasonic sensors** with Arduino  
- Controlling **servo motors** with smooth sweeps  
- Using **Serial communication** between Arduino & Processing  
- Designing **real-time radar visualization**  

---

## 📌 Applications
- Obstacle detection for robots  
- Parking assistance systems  
- DIY security projects  

---

## 📂 Project Files
- **Arduino Code** → `Arduino/radar.ino`  
- **Processing IDE Code** → `Processing/radar_visualization.pde`  
- **Images** → Circuit diagram, radar screenshots  

---

## 🔧 Circuit Diagram
📷 *[Add your circuit image here]*  

**Connections:**
- Ultrasonic `Trig → D10`, `Echo → D11`  
- Servo `Signal → D12`  
- VCC → 5V, GND → GND  

---

## ▶️ How to Run

### 1. Arduino
1. Open `radar.ino` in Arduino IDE.  
2. Connect Arduino UNO.  
3. Upload the sketch.  

### 2. Processing
1. Open `radar_visualization.pde` in **Processing IDE**.  
2. Change `"COM5"` → your Arduino COM port (Windows: COMx, Linux: `/dev/ttyUSB0`).  
3. Run the sketch → you’ll see the **green radar screen**.  

---

## 📊 Demo Output
📷 *[Insert radar output screenshot here]*  

---

## 👨‍💻 Author
**Tamilvanan I**  
📍 Coimbatore, Tamil Nadu  
📧 bashatamil82@gmail.com  
🔗 [GitHub Profile](https://github.com/Tamilvanan260)  

---

⭐ Don’t forget to **star this repo** if you like it! 🚀

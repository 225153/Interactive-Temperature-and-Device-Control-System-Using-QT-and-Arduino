

### **Interactive Temperature and Device Control System Using QT and Arduino**  

This project demonstrates a smart temperature monitoring and control system using an Arduino Uno and QT Creator. The system integrates a DHT11 sensor to read real-time temperature and a buzzer to alert users when critical thresholds are exceeded. Users can interact with the system through a QT-based GUI, which displays the current temperature and allows for controlling LED brightness and state.  

#### **Features**  
- **Temperature Monitoring**: Reads real-time temperature data from the DHT11 sensor and displays it on the QT interface.  
- **Critical Alerts**: Activates a buzzer when the temperature exceeds a predefined threshold (e.g., 50°C).  
- **Device Control**: Control LEDs (on/off, brightness adjustment) directly through the QT GUI.  
- **Real-Time Feedback**: Immediate response to changes in temperature or user commands.  

#### **Components**  
1. **Hardware**  
   - Arduino Uno  
   - DHT11 Temperature and Humidity Sensor  
   - Buzzer (2-pin)  
   - LEDs (Digital and PWM control)  
   - Resistors and jumper wires  

2. **Software**  
   - Arduino IDE  
   - QT Creator  

#### **How It Works**  
1. The DHT11 sensor reads the temperature and sends data to the Arduino Uno.  
2. The Arduino processes the data and sends it to the QT application via serial communication.  
3. The QT interface displays the temperature and allows users to control LED states and brightness.  
4. If the temperature exceeds the critical threshold, the buzzer is activated, notifying the user.  




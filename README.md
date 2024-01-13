# SitSmart - Posture Reminder, Protect Your Spine.
## Description

The SitSmart is an innovative device designed to monitor and correct your sitting posture in real-time. It gently alerts you when you've been in a static position for too long or when your posture could potentially harm your spine.   

This smart tool not only helps in promoting spinal health but also encourages regular movement, making it ideal for office workers and individuals with sedentary lifestyles.  

<img width="332" alt="Screenshot 2024-01-12 at 16 14 11" src="https://github.com/FenglyuLiu/TECHIN514-Final-Project/assets/88125716/aa0aad5f-3529-4733-9dc8-87e3d094f545">


## Sensors
**Velostat/Linqstat**: This conductive material is a nice addition for wearable/sensor hacking toolkit. It's pressure sensitive: squeezing it will reduce the resistance, so it's handy for making flexible sensors. 

Reference: https://www.adafruit.com/product/1361  

<img width="500" alt="Screenshot 2024-01-12 at 15 57 05" src="https://github.com/FenglyuLiu/TECHIN514-Final-Project/assets/88125716/b03bc429-0c46-4997-8bd4-7abeb53b964b">

**Conductive Rubber Cord Stretch Sensor**: This cord is 2mm diameter, and 1 meter long, made of carbon-black impregnated rubber. In a 'relaxed' state, the resistance is about 350 ohms per inch. As you stretch it out, the resistance increases.  

Reference: https://www.adafruit.com/product/519  

<img width="500" alt="Screenshot 2024-01-12 at 15 57 59" src="https://github.com/FenglyuLiu/TECHIN514-Final-Project/assets/88125716/c806e682-e0bf-4073-91d8-3cd911c0c5d4">

**Round Force-Sensitive Resistor (FSR)**: FSRs are sensors that allow you to detect physical pressure, squeezing and weight. They are simple to use and low cost.  It’s a resistor that changes its resistive value (in ohms Ω) depending on how much it is pressed.  

Reference: https://www.adafruit.com/product/166   

<img width="500" alt="Screenshot 2024-01-12 at 15 58 30" src="https://github.com/FenglyuLiu/TECHIN514-Final-Project/assets/88125716/56a70315-148f-4a7b-9b5b-aaf491850641">

## Sensor Device
By integrating these sensors into the seat cushion and analyzing the resistance changes they detect, the device can provide real-time feedback on the user's posture and encourage corrections to maintain spinal health. This smart approach allows for a discreet and non-invasive way to ensure ergonomic sitting habits.

<img width="697" alt="Screenshot 2024-01-12 at 16 11 49" src="https://github.com/FenglyuLiu/TECHIN514-Final-Project/assets/88125716/a5014ee0-9c2d-46e5-ae3e-f5d250d40226">

## Microcontroller
**Arduino Uno Rev3**: 
Arduino Uno is a microcontroller board based on the ATmega328P. It has 14 digital input/output pins (of which 6 can be used as PWM outputs), 6 analog inputs, a 16 MHz ceramic resonator (CSTCE16M0V53-R0), a USB connection, a power jack, an ICSP header and a reset button. It contains everything needed to support the microcontroller; simply connect it to a computer with a USB cable or power it with a AC-to-DC adapter or battery to get started.  

Reference: https://store.arduino.cc/products/arduino-uno-rev3  

<img width="500" alt="Screenshot 2024-01-12 at 16 09 31" src="https://github.com/FenglyuLiu/TECHIN514-Final-Project/assets/88125716/d7565c15-868b-41fa-b0ab-0197b1c7d7b4">


## Display Device
**The LED light array display** designed for indicating posture is a modern and intuitive device that uses an array of LEDs to communicate the user's sitting posture. 

The display is compact and can be conveniently **placed on a desk in front of the user**. It features various **colored LEDs**, such as green to represent correct posture and red to indicate incorrect posture.   

Different patterns can suggest which aspect of the posture is misaligned. **Simple graphics and symbols** depict various sitting positions, enabling the user to quickly understand and correct their posture. 

This visual feedback system is user-friendly and serves as an immediate reminder to maintain healthy spinal alignment while seated.

Reference: https://www.adafruit.com/product/607

<img width="500" alt="Screenshot 2024-01-12 at 17 20 03" src="https://github.com/FenglyuLiu/TECHIN514-Final-Project/assets/88125716/a68d77f8-773f-49f1-893f-87289911f03c">



## System Architecture


**Sensor Data Collection:**

The Velostat/Linqstat, stretch sensors, and FSRs collect data on the user's posture by measuring resistance changes. This data is continuously sent to the microcontroller.

**Data Processing:**

The microcontroller reads the analog signals from the sensors which correspond to pressure and stretch values. It then processes these values using predefined algorithms to determine the user's posture.

**Wireless Communication Module:**

A wireless communication module like Bluetooth or Wi-Fi (ESP8266 or ESP32 for Arduino) can be used to transmit data.

**Signal Interpretation and Display:**

The microcontroller interprets the processed data and converts it into signals that can control the LED array. These signals dictate which LEDs light up and their color.

**Feedback Loop:**

The LED display provides real-time visual feedback to the user. If the user adjusts their posture based on the LED indications, the sensors detect this change, and the new data is sent back to the microcontroller, creating a continuous loop of communication and feedback.


<img width="1162" alt="Screenshot 2024-01-12 at 17 12 02" src="https://github.com/FenglyuLiu/TECHIN514-Final-Project/assets/88125716/6cd6b8bd-da2b-4835-956c-6362972bfbd3">
























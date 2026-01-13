**PUSH-BUTTON-COUNTER-TEMPERATURE-READING-**

COMPANY:CODTECH IT SOLUTIONS

NAME:PRODDUTURI SAI KUMAR

INTERN ID:CTO4DR3169

DOMAIN:EMBEDDED SYSTEMS

DURATION:4 WEEKS

MENTOR:NEELA SANTOSH KUMAR


1.INTRODUCTION

Temperature monitoring is one of the most important applications of embedded systems in industrial automation, medical devices, and environmental monitoring. In embedded systems, sensors are used to convert physical parameters into electrical signals. In this project, a temperature sensor (LM35) is interfaced with an 8051 microcontroller (AT89C51). Since the 8051 microcontroller does not have an inbuilt Analog-to-Digital Converter (ADC), an ADC0804 is used to convert the analog output of the temperature sensor into digital data. The measured temperature is then displayed on a 16×2 LCD. The complete system is designed and simulated using KEIL µVision for coding and PROTEUS for circuit simulation.

2.OBJECTIVES

The main objectives of this project are: To understand temperature sensor interfacing To learn ADC interfacing with 8051 To design and simulate embedded circuits using PROTEUS To write and compile embedded C programs using KEIL To display real-time temperature values on an LCD To demonstrate a complete working embedded system.

3.SYSTEM OVERVIEW

The system consists of four major blocks: Temperature Sensing Unit – LM35 Analog to Digital Conversion Unit – ADC0804 Processing Unit – AT89C51 (8051) Display Unit – 16×2 LCD The LM35 senses temperature and produces a voltage proportional to temperature. The ADC0804 converts this voltage into digital form, which is read by the 8051 microcontroller. The microcontroller processes the data and displays the temperature on the LCD.

4.BLOCK DIAGRAM

<img width="1161" height="824" alt="Screenshot 2026-01-12 140210" src="https://github.com/user-attachments/assets/20247769-733b-44a4-a4ed-12e186347089" />


5.HARDWARE COMPONENTS USED
   
5.1 AT89C51 Microcontroller 8-bit microcontroller 4 KB Flash memory 32 I/O pins No inbuilt ADC Widely used for educational and industrial applications 5.2 LM35 Temprature Sensor Analog temperature sensor Output: 10 mV per °C Operating voltage: 4–30 V Accuracy: ±0.5 °C 5.3 ADC0804 8-bit ADC Single channel Conversion time ≈ 100 µs Operates at 5V Parallel output (D0–D7) 5.4 16×2 LCD Displays 16 characters per line 2 lines Operates in 4-bit mode Used to display temperature data

6.SOFTWARE TOOLS USED

Software Purpose KEIL µVision Writing, compiling, generating HEX file PROTEUS ISIS Circuit design and simulation Embedded C Programming language

7.WHY ADC IS REQUIRED?
The LM35 produces an analog voltage output. The AT89C51 microcontroller can only process digital data. Therefore: ADC0804 is used to convert analog voltage into digital form.

8.CIRCUIT DESIGN (PROTEUS)
8.1 LM35 to ADC0804 Connections LM35 Pin Connection Pin 1 (VCC) +5V Pin 2 (OUT) ADC0804 Vin+ Pin 3 (GND) GND 8.2 ADC0804 to AT89C51 Connections ADC0804 Pin AT89C51 Pin D0–D7 Port-1 (P1.0–P1.7) WR P3.6 RD P3.7 INTR P3.2 CS GND CLK IN RC network 8.3 LCD to AT89C51 Connections (4-bit mode) LCD Pin AT89C51 Pin RS P2.0 EN P2.1 D4 P2.4 D5 P2.5 D6 P2.6 D7 P2.7 VSS GND VDD +5V V0 Potentiometer 9. WORKING PRINCIPLE

LM35 senses ambient temperature Produces analog voltage (10 mV/°C) ADC0804 converts voltage to digital value 8051 reads digital data Temperature calculated using formula LCD displays temperature

9.TEMPERATURE CALCULATION Temperature (°C) = (ADC Value × 500) / 255

10.FLOW CHART START | Initialize LCD & ADC | Read ADC Value | Convert to Temperature | Display on LCD | Delay | Repeat

11.EMBEDDED C CODE (KEIL)

(Same fully working code as earlier, KEIL compatible) ✔ Generates HEX file ✔ Runs in PROTEUS (Already explained line-by-line in previous message) 13. PROTEUS SIMULATION PROCEDURE

Open Proteus ISIS Place AT89C51, LM35, ADC0804, LCD Connect components as per circuit Load HEX file into AT89C51 Run simulation Change LM35 temperature value Observe LCD output

12.OUTPUT OBSERVATION LCD DISPLAY: Temperature: 30°C When LM35 value changes: Temperature: 35°C ✔ Real-time response observed

13.RESULTS Accurate temperature measurement Proper ADC conversion LCD displays real-time temperature Successful KEIL + PROTEUS simulation

14.APPLICATIONS

Industrial monitoring systems Embedded laboratories Smart devices Medical equipment Weather stations

15.ADVANTAGES
Simple and cost-effective Real-time monitoring Easy to expand Good learning platform

16.LIMITATIONS
No data logging Limited resolution Requires ADC hardware

17.FUTURE ENHANCEMENTS
Add push button for unit selection Use digital temperature sensor Add buzzer alert IoT integration Data storage

18.CONCLUSION
This project successfully demonstrates temperature measurement using an LM35 sensor, ADC0804, and AT89C51 microcontroller. The system was coded in KEIL and simulated in PROTEUS, fulfilling all CODTECH internship requirements.
"C:\codtech embedded internship\TASK 1 PUSH BUTTON COUNTER\push_button_counter output.mp4"





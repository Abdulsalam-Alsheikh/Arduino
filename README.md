# DcToServoMotor

This project is a practical application developed for a university project to ensure understanding and implementation of the Proportional-Integral-Derivative (PID) algorithm. The implementation involves using an Arduino Uno microcontroller and a motor driver circuit to convert a DC motor into a servo motor using the PID algorithm. The project includes a variable resistor (potentiometer) connected to the DC motor shaft through a gear chamber.

### Components Used:

•	Arduino Uno   
•	Motor Driver Circuit N298L  
•	DC Motor (utilizing components from a disassembled servo motor)    
•	Variable Resistor (Potentiometer)  (utilizing components from a disassembled servo motor)  
•	Gear Chamber (utilized from disassembled servo motor)  

### Implementation Details:  

Disassembly of Servo Motor:  
The servo motor was disassembled to extract specific components, including the DC motor, variable resistor, and gear chamber. The internal servo motor controller was removed, and only the essential parts were retained for integration.

### Circuit Connection: 

The circuit connections involve setting up the components as follows:
  1.	DC Motor and Motor Driver:  
  •	Connect the DC motor to the motor driver circuit.  
  •	Ensure the motor driver circuit is properly connected to the Arduino Uno.
  2.	Variable Resistor (Potentiometer):  
  •	Connect the variable resistor to the Arduino Uno.  
  •	Utilize the variable resistor as a sensor to provide feedback for the PID algorithm.
  3.	Gear Chamber:  
  •	Integrate the gear chamber to facilitate the transfer of motion from the motor shaft to the variable resistor.  
  •	This integration establishes a feedback loop for the PID algorithm.

The overall circuit configuration ensures a synchronized operation between the DC motor, variable resistor, and the Arduino Uno through the motor driver circuit. This setup allows the PID algorithm to receive feedback from the variable resistor, enabling precise control over the motor's position.

Watch the project on [YouTube](https://youtu.be/TYZzFxdzLUk?si=nMvvifP5XatMQnvQ)

![image](https://github.com/Abdulsalam-Alsheikh/Convert-Dc-Motor-To-Servo-Motor-/assets/150949079/79554825-5e15-4157-a9b7-5eb7115d05ce)


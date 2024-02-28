Arduino PID Controller Project

This project is a practical application developed for a university project to ensure understanding and implementation of the Proportional-Integral-Derivative (PID) algorithm. The implementation involves using an Arduino Uno microcontroller and a motor driver circuit to convert a DC motor into a servo motor using the PID algorithm. The project includes a variable resistor (potentiometer) connected to the continuous motor shaft through a gear chamber.

Components Used

•	Arduino Uno
•	Motor Driver Circuit
•	DC Motor (utilizing components from a disassembled servo motor)
•	Variable Resistor (Potentiometer)
•	Gear Chamber (utilized from disassembled servo motor)

Implementation Details

The DC motor is connected to the motor driver circuit, which, in turn, is connected to the Arduino Uno. The variable resistor is connected to the Arduino to act as a sensor. The gear chamber is used to transfer motion from the motor shaft to the variable resistor, creating a feedback loop for the PID algorithm.

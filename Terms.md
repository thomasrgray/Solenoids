# Technical Concepts

## Solenoid
A **solenoid** is an electromagnetically operated valve. In our setup, we use a **normally closed (NC)** 2-way valve to precisely dose taste and odors.

### Formula
The relationship between the required solenoid force, the fluid pressure, and the orifice area is given by:

F_solenoid = P * A = P * π * (d / 2)^2

- **F_solenoid**: Required solenoid force  
- **P**: Fluid pressure  
- **A**: Orifice area  
- **d**: Orifice diameter  

### Explanation
The area \( A \) of the orifice is derived from the formula for the area of a circle:

A = π * (d / 2)^2

## MOSFET
A **MOSFET** (Metal Oxide Semiconductor Field Effect Transistor) is a device with an insulated **Gate**, where the applied voltage determines its conductivity. 

### Key Features
- **Gate Voltage**: Controls the device's conductivity.  
- **Functionality**: This property is used to switch electronic signals by varying the applied voltage.

---

## Resistor
The **pulldown resistor (PD)** ensures a known state for a signal in circuits, particularly when working with switches and transistors.

### Usage
- Used with switches and transistors that physically interrupt the connection to **ground** or **\( V_a \)**.  
- **Without a pulldown resistor**: The circuit could be left floating at an indeterminate voltage when the switch is open.

---

## Flyback Diode
A **flyback diode** is connected across an inductor to eliminate **flyback**—a sudden voltage spike that occurs when the inductor's supply current is suddenly reduced or interrupted.

### Purpose
- Protects the circuit from damage caused by voltage spikes.  
- Ensures stable operation in systems involving inductors.

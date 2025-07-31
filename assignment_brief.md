# MECHENG 306: Design of Sensing and Actuating Systems  
## Project 1: Design and Implementation of a Closed-Loop X-Y Plotter

**Jonathan Stringer**  
**Date**: July 21st, 2025

---

## 1. Administration

### 1.1 Personnel  
**Project Organiser/Lecturer**:  
Jonathan Stringer  
(Room 405.873, j.stringer@auckland.ac.nz)  
**Office Hours**: Monday 1:30 – 2:30 pm (during project)

### 1.2 Project Objectives  
- Design, implement, and analyse a complete closed-loop mechatronic system  
- Develop and tune a motion control system for a 2-axis X-Y plotter  
- Create a structured, fault-tolerant software architecture for real-time control  
- Formally analyse safety in a hypothetical hazardous system modification

### 1.3 Learning Objectives  
By the end of this project, you will have:  
- Integrated hardware, sensors, actuators, and a microcontroller  
- Implemented and tuned a PID controller for precise position control  
- Developed an FSM-based fault-tolerant software architecture  
- Applied signal conditioning techniques for real-world sensors  
- Created a G-code parser for host-system interfacing  
- Applied HARA and FMEA to evaluate system modification risks  

### 1.4 Project Weighting and Grouping  
- Worth **35%** of the total MECHENG 306 grade  
- Groups of 4 (preferably from the same stream)  
- Group signup by end of Week 1 on Canvas  

### 1.5 Academic Integrity and Use of AI Tools  
- All work must be your group’s own  
- **AI tools may be used** for debugging or writing improvement, but **not for generating code or report content**  
- All code and analysis must be understood and defensible by the team

---

## 2. Project Information

### 2.1 Design Specification  
Implement a robust closed-loop control system for a 2-axis X-Y plotter that communicates via serial and executes precise motion.

#### 2.1.1 Provided Hardware  
- 1× X-Y plotter chassis  
- 2× DC servo motors with encoders  
- 4× Limit switches  
- 1× Arduino Mega 2560  
- 1× DFRobot L298P Motor Shield  
- USB cable, breadboard, jumper wires  
- 3–12 V 1.25 A power supply  
- Duplicates and datasheets provided where relevant

#### 2.1.2 Control Interface  
- Communicate via serial  
- Accept and execute a subset of **G-code** (e.g. via Arduino IDE Serial Monitor)

#### 2.1.3 Functional Requirements  
- **Homing (G28)**: Move to origin until limit switches trigger  
- **Linear Motion (G1)**: Coordinated movement to specified X-Y coordinates  
- **Finite State Machine (FSM)**: Handle states (IDLE, HOMING, MOVING, FAULT)  
- **Fault Tolerance**: Enter FAULT state if a limit switch triggers unexpectedly

#### 2.1.4 Software and Signal Conditioning  
- Written in C/C++ on Arduino Mega  
- Must be **non-blocking** (no `delay()` over a few µs)  
- Implement:
  - Robust encoder reading
  - Software debouncing for limit switches

#### 2.1.5 Use of Pre-existing Software Libraries  
- **Not allowed** for core features like PID, FSM, debouncing, G-code parsing  
- **Permitted**: Arduino framework, basic motor shield library for abstraction

#### 2.1.6 Resetting and Initialisation  
- On power-up, enter a stable **IDLE** state  
- Accept a single command (e.g. G28) to begin motion sequence

---

## 3. Design Considerations

### 3.1 Robustness and Reliability  
Design control and software to handle sensor noise, bugs, and mechanical limits.

### 3.2 Software Architecture  
Use FSM to guide modular, readable, scalable code.

### 3.3 System Integration and Debugging  
Use serial output to aid iterative testing and integration.

### 3.4 Safety and Formal Analysis  
Apply HARA and FMEA to analyse a more hazardous version (e.g., with a laser toolhead).

### 3.5 Version Control  
Recommended to use Git/GitHub or GitLab for collaboration and tracking changes.

---

## 4. Resources

### 4.1 Lectures and Office Hours  
Lecture content will align with project phases. Office hours: Monday 1–2 pm.

### 4.2 Laboratory Sessions  
Primary time for hands-on development and demonstration. Equipment provided.

### 4.3 Ed Discussion  
Use for general class questions. Anonymous posts are visible to staff.

### 4.4 Hardware Management and Faults  
Test components early. Faulty parts will be replaced only after staff verification. Teams are responsible for damage caused by misuse.

---

## 5. Assessment and Submission

### 5.1 Group System Demonstration (50 marks) – Final Lab Session  
- 30 minutes setup time  
- Run through unseen G-code commands  
- Explain design, control, and architecture

### 5.2 Group Weekly Progress (5 marks)  
Assessed via weekly lab stand-ups with instructors.

### 5.3 Group Technical Report (40 marks)  
- Max 3000 words (excluding appendices)  
- Includes:
  1. Title page + TOC  
  2. High-level architecture (incl. FSM diagram)  
  3. **Formal Safety Analysis** of laser cutter scenario:
     - HARA (hazard and risk analysis)
     - FMEA (at least two critical components)
     - Risk mitigations
  4. Performance Evaluation with telemetry data  
  5. Conclusions + future improvements  
  6. Appendices: commented source code, contribution statement

### 5.4 Individual Reflection (5 marks)  
Each member writes 300–500 words on:
- Their contribution  
- One key technical challenge  
- Lessons learned

### 5.5 Peer Evaluation  
Used at the end of the project to adjust marks if needed based on group dynamics.

---

## 6. Suggested Reading List  
- MECHENG 201, 270, 313, 322, and 370 lecture notes  
- Documentation provided on Canvas

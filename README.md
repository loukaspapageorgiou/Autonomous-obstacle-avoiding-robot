# Autonomous-obstacle-avoiding-robot
An autonomous obstacle-avoiding robot car built with Arduino, utilizing an ultrasonic sensor and DC motor driver for real-time navigation.


# Autonomous Obstacle-Avoiding Robot 🤖🚗

This project was developed for the course **"Introduction to Electrical Engineering"**, aiming to familiarize students with robotics, control systems, and microcontroller programming. The objective of the Autonomous Obstacle-Avoiding Robot is to identify obstacles in its environment and avoid them with zero human intervention.

## Hardware Components

The robot consists of the following hardware components:
* **1x Arduino Uno Board**
* **1x Stepper Motor Driver Controller Board L298N**
* **1x Breadboard**
* **4x Waveshare Infrared Proximity Sensors**


## Development Stages & Challenges

### 1. Assembly
* Having no prior experience with such a construction, we initially positioned the components on the robot without screwing them down, anticipating that parts might need to be relocated during wiring.
* While this lack of permanent fixation made the robot unstable and difficult to transport initially, it provided flexibility for repositioning components and saved significant time across multiple modifications until the final layout was achieved.
* To cover the largest possible perimeter, the four sensors were mounted at the four corners of the robot with an outward tilt.

### 2. Wiring
* During the wiring phase, certain components were found to be in positions that hindered the process and had to be relocated; specifically, the breadboards  were moved from the upper deck to the lower deck to free up space.
* A shortage of wires caused a brief delay of a few days until additional wires were requested and provided by the course professor.
* Once all wiring connections were completed, all components were securely screwed onto the chassis.

### 3. Programming
* Since this was the team's first time writing code in the Arduino environment, considerable time was dedicated to getting familiar with the platform.
* Extensive experimentation was required to accurately map the programmed movement commands from the software environment to the physical experimental environment.
* Because the robot utilizes 4 sensors, 16 distinct logic cases were implemented to dictate the robot's movement based on the combination of sensor readings.

## Experimental Results & Limitations

During the trial runs of the robot, the following operational limitations were observed:
Sunlight Interference: Solar infrared radiation affected the operation of the sensors due to their reliance on infrared technology.

Object & Surface Detection Limits:** Low-height objects, small-sized objects, and dark-colored surfaces were not easily detected by the infrared sensors, causing the robot to fail to recognize them as obstacles and collide with them instead of avoiding them.

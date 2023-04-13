
# **Secure Door Access System Using AVR Microcontroller**

This is an AVR microcontroller based security system application that uses a password to unlock a door. It communicates with another microcontroller using UART communication. It has functions to read and initialize the password, display system options, and simulate the opening of the door. It uses a keypad to take input from the user and displays messages on an LCD. If the user enters the correct password, the door opens, otherwise, the system displays a message indicating the wrong password. If the user wants to change the password, the system prompts them to enter the current password and if it's correct, it allows them to initialize a new password. The application uses timer interrupts to track the time elapsed since the system was started.


## **Table of Contents**

- [Proteus](#Proteus)
- [Driveers](#Driveers)
- [Features](#Features)
- [conclusion](#conclusion)
- [Contact](#Contact)
- [Contributing](#contributing)


## **Proteus**

![simulation](https://github.com/Esmtra/Door_Locker_MT_Embedded_diploma/blob/main/img/simulation.png "simulation")

## **Driveers**
1. Input/Output:
- GPIO
(General Purpose Input/Output) Driver: Used to control the microcontroller's pins for various purposes, such as reading keypad input, driving DC motor and buzzer output, and controlling LCD display.
- Keypad
Used to read input from the keypad and determine which button was pressed. It includes functions for initializing the keypad and reading its output.

2. Display:
- LCD
(Liquid Crystal Display) Driver: Used to interface with and display information on the LCD display. It includes functions for initializing the display, sending data and commands to the display, and clearing the display.

3. Communication:
- UART
(Universal Asynchronous Receiver/Transmitter) Driver: Used for serial communication between two microcontrollers. In your application, it is used to send and receive passwords to and from the Control ECU.
- I2C
I2C (Inter-Integrated Circuit) Driver: Used to communicate with devices using the I2C protocol, such as the Control ECU.

4. Actuators:
- DC motor
Used to drive the DC motor to simulate the unlocking of the door. It includes functions for controlling the direction and speed of the motor.
- Buzzer
Used to generate sound output to indicate various events, such as a wrong password or the unlocking of the door.

5. Memory:
- EEPROM
Used to store and retrieve data in non-volatile memory, such as the password. It includes functions for reading and writing to EEPROM memory.

6. Timing:
- Timer
Used to generate periodic interrupts to execute tasks at specific intervals, such as incrementing a global variable to keep track of time since the system was started.

## **Features**

- Password-based security system
- User input via keypad
- LCD display for system messages and prompts
- Communication with Control ECU via UART
- Timer to track elapsed time
- Door unlocking simulation


## **conclusion**
In conclusion, the embedded system application described above demonstrates a simple yet effective security system using a password to unlock a door. The system communicates with a Control ECU through UART communication and performs different functionalities based on user input from the keypad. The application implements several functions, such as initializing the system, reading and initializing the password, displaying main options on the LCD, and simulating the opening of the door. The application's code is designed to run on an AVR microcontroller, making it highly efficient and cost-effective. Overall, this application can be useful for small-scale security systems in homes, offices, or other facilities, providing a reliable and straightforward solution to ensure access control.


## **Contact**

- **[Eslam S Rady](mailto:Eselmtrawy@gmail.com)** - Email address
- **[GitHub](https://github.com/Esmtra)** - GitHub profile link
- **[LinkedIn](https://www.linkedin.com/in/eslam-mtra-1714201b7/)** - LinkedIn profile link


## **Contribution**
This is a basic Embedded system application and may require further development to be more robust and scalable. Contributions are welcome, and issues can be reported through the project's Github issue tracker.

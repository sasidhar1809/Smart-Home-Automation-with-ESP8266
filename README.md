# Smart-Home-Automation-with-ESP8266

This project allows you to control eight (8) Relays connected to your ESP8266 board using the user-friendly Blynk IoT platform. You can customize it to manage various devices and functionalities within your smart home environment.

Features:

Connects to your Wi-Fi network for remote control.
Integrates with Blynk for intuitive mobile control via the Blynk app.
Controls eight (8) Relays connected to designated GPIO pins on the ESP8266.
Implements a Blynk virtual write event to receive Relay control commands from the Blynk app.
Hardware Requirements:

ESP8266 development board (any variant)
Eight (8) Relays
Resistors (values depend on Relay specifications)
Breadboard and connecting wires
Software Requirements:

Arduino IDE (https://www.arduino.cc/)
Blynk library (https://blynk.io/getting-started)
Wi-Fi credentials for your network
Installation:

Download and install the Arduino IDE.
Install the Blynk library:
In the Arduino IDE, go to Sketch > Include Library > Manage Libraries.
Search for "Blynk" and install the library by Blynk Inc.
Clone or download this repository to your computer.
Open the .ino file (e.g., home_automation.ino) in the Arduino IDE.
Configuration:

Replace the placeholders in the code with your specific details:
auth: Your Blynk authentication token (obtain from the Blynk app)
ssid: Your Wi-Fi network name (SSID)
password: Your Wi-Fi network password
RelayPins: Adjust the GPIO pin numbers to match your Relay connections (if necessary)
Connect your Relays to the designated pins on the ESP8266 board, ensuring appropriate resistor values for current limiting.
Usage:

Upload the code to your ESP8266 board using the Arduino IDE.
Download and install the Blynk app on your smartphone or tablet.
Create a new project or open an existing one.
Select the template that matches your hardware setup (e.g., "Relay Control").
Use the Blynk app widgets to control the connected Relays.

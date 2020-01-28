/*
AT COMMANDS

FOR TESTING, CHANGING THE SSID & PIN of the BT MODULE for hc05/06

TEST Communications test “AT”

CHANGE SSID Sets the modules name “AT+NAMEPanda“

CHANGE PIN Set the PIN to 1234 “AT+PIN1234”

BT TX - D2 BT RX - D3
*/
// Basic Bluetooth sketch HC-06_01

// Connect the Hc-06 module and communicate using the serial monitor

// The HC-06 defaults to AT mode when first powered on.

// The default baud rate is 9600

// The Hc-06 requires all AT commands to be in uppercase. NL+CR should not be added to the command string

// Use no line ending in serial monitor

/*Command Reply Comment

The HC-06 zs-040 expects commands to be in upper case and does not require carriage return and new line (\r\n) characters. Open the serial monitor and select a baud rate of 9600 and ensure “No line ending” is selected from the drop down list at the bottom of the window.

Enter “AT” (no quotes) into the top text box and hit Send. If the HC-06 likes you it will say OK. AT is a basic communications test command that allows you to check the HC-06 is connected and communicating.

AT OK Communications test

AT+VERSION OKlinvorV1.8 Firmware version.

AT+NAMEPanda OKsetname Sets the modules name to “Panda”

AT+PIN1234 OKsetPIN Set the PIN to 1234

*/

#include <SoftwareSerial.h>

SoftwareSerial BTserial(2, 3); // BT_TX | BT_RX

// Connect the HC-06 TX to the Arduino RX on pin 2.

// Connect the HC-06 RX to the Arduino TX on pin 3.

void setup()

{

Serial.begin(9600);

Serial.println("Enter AT commands:");

// HC-06 default serial speed is 9600

BTserial.begin(9600);

}

void loop()

{

// Keep reading from HC-06 and send to Arduino Serial Monitor

if (BTserial.available())

{

Serial.write(BTserial.read());
}

// Keep reading from Arduino Serial Monitor and send to HC-06

if (Serial.available())

{

BTserial.write(Serial.read()); 
}

}

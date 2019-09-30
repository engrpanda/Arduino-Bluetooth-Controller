# Arduino-Bluetooth-Controller 
app version: 1.0

For HC 05 , HC 06 & HM 10

This app makes you control your Arduino projects like RC car or any IOT applications using your mobile phone thru bluetooth.

# Compatible with android 4.4.4 (API 19) to android 9(API 28). 
# Compatible from Bluetooth 2.0 to Bluetooth 5.0.
This app is under beta test. Any bugs or error can be reported or send to my email. (engrpandaece@gmail.com) 


Check the provided Schematic Fritzing for connections. Arduino Pins D0 & D1 are used for Bluetooth Module.

![4](https://user-images.githubusercontent.com/53995355/65497276-89f9ac00-deec-11e9-8701-28c182f16724.png)
#
You can choose from Switch ON/OFF mode or Gamepad mode. other mode is coming soon.

![3](https://user-images.githubusercontent.com/53995355/65497275-89f9ac00-deec-11e9-9278-ddb8776ff3b3.png)




#
# FOR HC 05/06
# SWITCH ON/OFF MODE
PARTS REQUIRED: 
- ARDUINO UNO or similar
- Anything Digital OUTPUT i.e LED's, Relay etc.
- Some resistors 
- Connecting wires
- Breadboard
- HC05/06 OR HM10

Labels(D2, D3, A0 etc) can be Rename. i.e LED1, Relay1.

Digital pins 2-13 & Analog pins A0-A5 can be used.

![2](https://user-images.githubusercontent.com/53995355/65497274-89611580-deec-11e9-891e-18971f0a444e.png)


#
# HC05/06 Schematic Fritzing Diagram
Sample Connection of Simple LED-Bluetooth control connection. You can add LED up to 18LEDs (D2-A5) to control.

![hc06 led_bb](https://github.com/engrpanda/Arduino-Bluetooth-Controller/blob/master/SCHEMATIC%20FRITZING%20DIAGRAM/HC06/hc06%20led_bb.jpg?raw=true)

Sample Connection of Relay-Bluetooth control connection. Up to 18 channels (D2-A5) Relay can be used. Using relay you can control your lights i.e bulbs or any appliances for IOT applications.

![hc06 relay_bb](https://github.com/engrpanda/Arduino-Bluetooth-Controller/blob/master/SCHEMATIC%20FRITZING%20DIAGRAM/HC06/hc06%20relay_bb.jpg?raw=true)

#
# Serial Code to Arduino
 Switch ON/OFF Serial code to Arduino

![SWITCH_CODE](https://user-images.githubusercontent.com/53995355/65497031-19528f80-deec-11e9-8a1d-17e3201a0b1f.png)

#
# GAMEPAD MODE
PARTS REQUIRED: 
- ROBOT CAR CHASIS WITH DC MOTORS
- ARDUINO UNO or similar
- L298N MOTOR DRIVER
- Connecting wires
- HC05/06 OR HM10

![1](https://user-images.githubusercontent.com/53995355/65497272-88c87f00-deec-11e9-9024-6ae516846173.png)

Sample Connection of RC Car-Bluetooth control connection. Using this controller you can control your RC car forward, Turnleft, turnright, backward etc. 

![hc06 car_bb](https://github.com/engrpanda/Arduino-Bluetooth-Controller/blob/master/SCHEMATIC%20FRITZING%20DIAGRAM/HC06/hc06%20car_bb.jpg?raw=true)

#
# Serial Code to Arduino
 Gamepad Serial code to Arduino
 
 NOTE: UP, LEFT, RIGHT, DOWN, SQUARE, TRIANGLE, CIRCLE, EXS Buttons can be hold. not holding serial value is "S".

![GAMEPAD_CODE](https://user-images.githubusercontent.com/53995355/65497029-18b9f900-deec-11e9-83d9-77695219c3f0.png)




#
# FOR HM10

# SWITCH ON/OFF MODE
PARTS REQUIRED: 
- ARDUINO UNO or similar
- Anything Digital OUTPUT i.e LED's, Relay etc.
- Some resistors 
- Connecting wires
- Breadboard
- HC05/06 OR HM10

Labels(D2, D3, A0 etc) can be Rename. i.e LED1, Relay1.

Digital pins 2-13 & Analog pins A0-A5 can be used.


Sample Connection of Simple LED-Bluetooth control connection. You can add LED up to 18LEDs (D2-A5) to control.

![hm10 led_bb](https://github.com/engrpanda/Arduino-Bluetooth-Controller/blob/master/SCHEMATIC%20FRITZING%20DIAGRAM/HM10/hm10%20led_bb.jpg?raw=true)

Sample Connection of Relay-Bluetooth control connection. Up to 18 channels (D2-A5) Relay can be used. Using relay you can control your lights i.e bulbs or any appliances for IOT applications.

![hm10 relay_bb](https://github.com/engrpanda/Arduino-Bluetooth-Controller/blob/master/SCHEMATIC%20FRITZING%20DIAGRAM/HM10/hm10%20relay_bb.jpg?raw=true)

#
# Serial Code to Arduino

 Switch ON/OFF Serial code to Arduino

![SWITCH_CODE](https://user-images.githubusercontent.com/53995355/65497031-19528f80-deec-11e9-8a1d-17e3201a0b1f.png)

#
# GAMEPAD MODE
PARTS REQUIRED: 
- ROBOT CAR CHASIS WITH DC MOTORS
- ARDUINO UNO or similar
- L298N MOTOR DRIVER
- Connecting wires
- HC05/06 OR HM10

Sample Connection of RC Car-Bluetooth control connection. Using this controller you can control your RC car forward, Turnleft, turnright, backward etc. 

![hm10 car_bb](https://github.com/engrpanda/Arduino-Bluetooth-Controller/blob/master/SCHEMATIC%20FRITZING%20DIAGRAM/HM10/hm10%20car_bb.jpg?raw=true)

#
# Serial Code to Arduino
 Gamepad Serial code to Arduino
 
 NOTE: UP, LEFT, RIGHT, DOWN, SQUARE, TRIANGLE, CIRCLE, EXS Buttons can be hold. not holding serial value is "S".

![GAMEPAD_CODE](https://user-images.githubusercontent.com/53995355/65497029-18b9f900-deec-11e9-83d9-77695219c3f0.png)


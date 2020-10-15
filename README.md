# ArduBT-Controller plus ULTRA
# Arduino-Bluetooth-Controller plus ULTRA

# COMPATIBLE FOR
  - HC 05 Bluetooth Classic Module
  - HC 06 Bluetooth Classic Module
  - HM 10 Bluetooth Low Energy Module
  
# 3 MODES
  - SWITCH ON/OFF MODE
  - GAMEPAD MODE 
    - Arrow button 
    - Analog joystick button
    - IP CAM Video VIEWER
  - VOICE RECOGNITION MODE
  
 more modes in progress

 ok why plus ultra? cuz im a big fan of all might(Plus ultra means go beyond your limit). :) 

 So there's a lot of arduino bluetooth controller in googlestore(play store) but there's limited buttons, functions and also limited to hc05 only or hm10 only. So i made this app to circumvent those problems whehe. This app is for those who has two types of bluetooth module and dont want to download each app specifically for that BT module. 

 This app makes you control your Arduino projects like RC car or any IOT applications using your mobile phone thru bluetooth.

 All the files (apk, circuit, program, codes) are all provided) :)

# Compatible with android 4.4.4 (API 19) to android 10(API 29). 
# Compatible from Bluetooth 2.0 to Bluetooth 5.0.

This app is under beta test.  Any bugs or error can be reported or send to my email. (engrpandaece@gmail.com) 

## Table Of Contents

- [Table Of Contents](#table-of-contents)
- [PROGRAM](#program)
- [FRITZING CIRCUIT CONNECTIONS](#fritzing-circuit-connections)
- [APP](#app)
- [1 SWITCH ON OFF MODE](#1-switch-on-off-mode)
  - [Sample Connection of Simple LED Bluetooth control](#sample-connection-of-simple-led-bluetooth-control)
    - [FOR HC 05 or 06 led](#for-hc-05-or-06-led)
    - [FOR HM10 led](#for-hm10-led)
  - [Sample Connection of Relay Bluetooth control](#sample-connection-of-relay-bluetooth-control)
    - [FOR HC 05 or 06 relay](#for-hc-05-or-06-relay)
    - [FOR HM10 relay](#for-hm10-relay)
    - [Serial Code to Arduino led](#serial-code-to-arduino-led)
- [2 GAMEPAD MODE](#2-gamepad-mode)
  - [Sample Connection of RC Car Bluetooth control](#sample-connection-of-rc-car-bluetooth-control)
    - [FOR HC 05 or 06 car](#for-hc-05-or-06-car)
    - [FOR HM10 car](#for-hm10-car)
    - [Serial Code to Arduino car](#serial-code-to-arduino-car)
- [3 VOICE RECOGNITION MODE](#3-voice-recognition-mode)


## PROGRAM

https://github.com/engrpanda/Arduino-Bluetooth-Controller/tree/master/ARDUINO%20PROGRAM

## FRITZING CIRCUIT CONNECTIONS

https://github.com/engrpanda/Arduino-Bluetooth-Controller/tree/master/SCHEMATIC%20FRITZING%20DIAGRAM

## APP

Play Store: https://play.google.com/store/apps/details?id=com.ArduBT.panda&hl=en

GIthub: https://github.com/engrpanda/Arduino-Bluetooth-Controller/releases





![screen1](https://github.com/engrpanda/Arduino-Bluetooth-Controller/blob/master/APP%20SAMPLE%20PIC/plus_ultra.jpg)
![screen1](https://github.com/engrpanda/Arduino-Bluetooth-Controller/blob/master/APP%20SAMPLE%20PIC/1.jpg)
#
You can choose from Switch ON/OFF mode, Gamepad mode, Voice Recognition mode. (will update more mode soon).

Check the provided Schematic Fritzing for connections. Arduino Pins D0 & D1 are used for Bluetooth Module.

![menu](https://github.com/engrpanda/Arduino-Bluetooth-Controller/blob/master/APP%20SAMPLE%20PIC/2.jpg)


# NOTE: Important. 
Before uploading to arduino disconnect first any connection in PIN D0 & D1 (TX,RX).

#
## 1 SWITCH ON OFF MODE
PARTS REQUIRED: 
- ARDUINO UNO or similar
- Anything Digital OUTPUT i.e LED's, Relay etc.
- Some resistors
- Connecting wires
- Breadboard
- HC05/06 OR HM10

Labels(D2, D3, A0 etc) can be Rename. i.e Light1, LED1, Relay1, .

Digital pins 2-13 & Analog pins A0-A5 can be used.

![2](https://github.com/engrpanda/Arduino-Bluetooth-Controller/blob/master/APP%20SAMPLE%20PIC/3.jpg)

#
### Sample Connection of Simple LED Bluetooth control

You can add LED up to 18LEDs (D2-A5) to control.


##### FOR HC 05 or 06 led

![hc06 led_bb](https://github.com/engrpanda/Arduino-Bluetooth-Controller/blob/master/SCHEMATIC%20FRITZING%20DIAGRAM/HC06/hc06%20led_bb.jpg?raw=true)

##### FOR HM10 relay led

![hm10 led_bb](https://github.com/engrpanda/Arduino-Bluetooth-Controller/blob/master/SCHEMATIC%20FRITZING%20DIAGRAM/HM10/hm10%20led_bb.jpg?raw=true)

#
### Sample Connection of Relay Bluetooth control 

Up to 18 channels (D2-A5) Relay can be used. Using relay you can control your lights i.e bulbs or any appliances for IOT applications.

#### FOR HC 05 or 06 relay

![hc06 relay_bb](https://github.com/engrpanda/Arduino-Bluetooth-Controller/blob/master/SCHEMATIC%20FRITZING%20DIAGRAM/HC06/hc06%20relay_bb.jpg?raw=true)


#### FOR HM10 relay

![hm10 relay_bb](https://github.com/engrpanda/Arduino-Bluetooth-Controller/blob/master/SCHEMATIC%20FRITZING%20DIAGRAM/HM10/hm10%20relay_bb.jpg?raw=true)



#
#### Serial Code to Arduino led

 Switch ON/OFF Serial code to Arduino
 
![SWITCH_CODE](https://github.com/engrpanda/Arduino-Bluetooth-Controller/blob/master/ARDUINO%20PROGRAM/SWITCH_CODE.PNG?raw=true)

#
## 2 GAMEPAD MODE
PARTS REQUIRED: 
- ROBOT CAR CHASIS WITH DC MOTORS
- ARDUINO UNO or similar
- L298N MOTOR DRIVER
- Connecting wires
- HC05/06 OR HM10

![1](https://github.com/engrpanda/Arduino-Bluetooth-Controller/blob/master/APP%20SAMPLE%20PIC/4.jpg)
![1](https://github.com/engrpanda/Arduino-Bluetooth-Controller/blob/master/APP%20SAMPLE%20PIC/4.1.png?raw=true)
![1](https://github.com/engrpanda/Arduino-Bluetooth-Controller/blob/master/APP%20SAMPLE%20PIC/ipcam.jpg?raw=true)
# IP CAM VIEWER

Using 3rd party IP CAM (copy the IP address) - Must be the same network

link:https://play.google.com/store/apps/details?id=com.pas.webcam&hl=en_US

#
### Sample Connection of RC Car Bluetooth control 

Using this controller you can control your RC car forward, Turnleft, turnright, backward etc. 


#### FOR HC 05 or 06 car

![hc06 car_bb](https://github.com/engrpanda/Arduino-Bluetooth-Controller/blob/master/SCHEMATIC%20FRITZING%20DIAGRAM/HC06/hc06%20car_bb.jpg?raw=true)


#### FOR HM10 car

![hm10 car_bb](https://github.com/engrpanda/Arduino-Bluetooth-Controller/blob/master/SCHEMATIC%20FRITZING%20DIAGRAM/HM10/hm10%20car_bb.jpg?raw=true)


#
##### Serial Code to Arduino car

 Gamepad Serial code to Arduino
 
 NOTE: UP, LEFT, RIGHT, DOWN, SQUARE, TRIANGLE, CIRCLE, EXS Buttons can be hold. not holding serial value for UP, DOWN, LEFT, RIGHT is "S" and for SQUARE, TRIANGLE, CIRCLE, EXS is "s". 

![GAMEPAD_CODE](https://github.com/engrpanda/Arduino-Bluetooth-Controller/blob/master/ARDUINO%20PROGRAM/GAMEPAD_CODE.PNG?raw=true)


#
## 3 VOICE RECOGNITION MODE

This mode lets the user control IOT applications using voice command thru arduino.(NEED INTERNET)


This mode use google tts & speech recognition. Make sure the device has it. Any Language can be recognized based on your phone google recognition. Voice text and arduino text code must be the same for it to work (Case sensitive).


![voice](https://github.com/engrpanda/Arduino-Bluetooth-Controller/blob/master/APP%20SAMPLE%20PIC/5.jpg)
![voice](https://github.com/engrpanda/Arduino-Bluetooth-Controller/blob/master/APP%20SAMPLE%20PIC/6.jpg)

# Sample Code


![voice](https://github.com/engrpanda/Arduino-Bluetooth-Controller/blob/master/APP%20SAMPLE%20PIC/Voice%20sample.PNG)


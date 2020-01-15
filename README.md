# Arduino-Bluetooth-Controller plus ULTRA
app version: 1.2

For HC 05 , HC 06 & HM 10

- ok why plus ultra? first im a fan of all might(hero academia LOL). So there's a lot of arduino bluetooth controller in googlestore(play store) but there's limited buttons, functions and also limited to hc05 only or hm10 only. So i made this app to circumvent those problems whehe. This app is for those who has many types of bluetooth module and dont want to download each app specifically for that BT module. 

- why panda? cause i love panda :P



This app makes you control your Arduino projects like RC car or any IOT applications using your mobile phone thru bluetooth.

All the files (apk, circuit, program, codes) are all provided) :)

# Compatible with android 4.4.4 (API 19) to android 9(API 28). 
# Compatible from Bluetooth 2.0 to Bluetooth 5.0.

This app is under beta test.  Any bugs or error can be reported or send to my email. (engrpandaece@gmail.com) 


Check the provided Schematic Fritzing for connections. Arduino Pins D0 & D1 are used for Bluetooth Module.

![screen1](https://github.com/engrpanda/Arduino-Bluetooth-Controller/blob/master/APP%20SAMPLE%20PIC/plus_ultra.jpg)
![screen1](https://github.com/engrpanda/Arduino-Bluetooth-Controller/blob/master/APP%20SAMPLE%20PIC/1.jpg)
#
You can choose from Switch ON/OFF mode, Gamepad mode, Voice Recognition mode. (will update more mode soon).

![menu](https://github.com/engrpanda/Arduino-Bluetooth-Controller/blob/master/APP%20SAMPLE%20PIC/2.jpg)




#
# 1.) SWITCH ON/OFF MODE
PARTS REQUIRED: 
- ARDUINO UNO or similar
- Anything Digital OUTPUT i.e LED's, Relay etc.
- Some resistors 
- Connecting wires
- Breadboard
- HC05/06 OR HM10

Labels(D2, D3, A0 etc) can be Rename. i.e LED1, Relay1.

Digital pins 2-13 & Analog pins A0-A5 can be used.

![2](https://github.com/engrpanda/Arduino-Bluetooth-Controller/blob/master/APP%20SAMPLE%20PIC/3.jpg)

#
# Sample Connection of Simple LED-Bluetooth control connection. 

You can add LED up to 18LEDs (D2-A5) to control.


# a.) FOR HC 05/06

![hc06 led_bb](https://github.com/engrpanda/Arduino-Bluetooth-Controller/blob/master/SCHEMATIC%20FRITZING%20DIAGRAM/HC06/hc06%20led_bb.jpg?raw=true)

# b.) FOR HM10

![hm10 led_bb](https://github.com/engrpanda/Arduino-Bluetooth-Controller/blob/master/SCHEMATIC%20FRITZING%20DIAGRAM/HM10/hm10%20led_bb.jpg?raw=true)

#
# Sample Connection of Relay-Bluetooth control connection. 

Up to 18 channels (D2-A5) Relay can be used. Using relay you can control your lights i.e bulbs or any appliances for IOT applications.

# a.) FOR HC 05/06

![hc06 relay_bb](https://github.com/engrpanda/Arduino-Bluetooth-Controller/blob/master/SCHEMATIC%20FRITZING%20DIAGRAM/HC06/hc06%20relay_bb.jpg?raw=true)


# b.) FOR HM10

![hm10 relay_bb](https://github.com/engrpanda/Arduino-Bluetooth-Controller/blob/master/SCHEMATIC%20FRITZING%20DIAGRAM/HM10/hm10%20relay_bb.jpg?raw=true)



#
# Serial Code to Arduino

 Switch ON/OFF Serial code to Arduino
 
![SWITCH_CODE](https://user-images.githubusercontent.com/53995355/65497031-19528f80-deec-11e9-8a1d-17e3201a0b1f.png)

#
# 2.) GAMEPAD MODE
PARTS REQUIRED: 
- ROBOT CAR CHASIS WITH DC MOTORS
- ARDUINO UNO or similar
- L298N MOTOR DRIVER
- Connecting wires
- HC05/06 OR HM10

![1](https://github.com/engrpanda/Arduino-Bluetooth-Controller/blob/master/APP%20SAMPLE%20PIC/4.jpg)

#
# Sample Connection of RC Car-Bluetooth control connection. 

Using this controller you can control your RC car forward, Turnleft, turnright, backward etc. 


# a.) FOR HC 05/06

![hc06 car_bb](https://github.com/engrpanda/Arduino-Bluetooth-Controller/blob/master/SCHEMATIC%20FRITZING%20DIAGRAM/HC06/hc06%20car_bb.jpg?raw=true)


# b.) FOR HM10

![hm10 car_bb](https://github.com/engrpanda/Arduino-Bluetooth-Controller/blob/master/SCHEMATIC%20FRITZING%20DIAGRAM/HM10/hm10%20car_bb.jpg?raw=true)


#
# Serial Code to Arduino

 Gamepad Serial code to Arduino
 
 NOTE: UP, LEFT, RIGHT, DOWN, SQUARE, TRIANGLE, CIRCLE, EXS Buttons can be hold. not holding serial value is "S".

![GAMEPAD_CODE](https://user-images.githubusercontent.com/53995355/65497029-18b9f900-deec-11e9-83d9-77695219c3f0.png)


#
# 3.) VOICE RECOGNITION MODE

This mode use google tts & speech recognition. Make sure the device has it. This mode lets the user control IOT applications using voice command thru arduino.

![voice](https://github.com/engrpanda/Arduino-Bluetooth-Controller/blob/master/APP%20SAMPLE%20PIC/5.jpg)
![voice](https://github.com/engrpanda/Arduino-Bluetooth-Controller/blob/master/APP%20SAMPLE%20PIC/6.jpg)

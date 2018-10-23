# ArduinoWaterBowl
Arduino Driven Pet Water Bowl to auto refill
-----------------------------------------------


-----------------------------------------------
Parts
-----------------------------------------------

Water Level Sensor
https://www.adafruit.com/product/3397

12v NC Water Solenoid Valve - 1/4" water line
https://www.amazon.com/gp/product/B0743CSRFF/ref=oh_aui_detailpage_o00_s00?ie=UTF8&psc=1

Arduino Nano ( or whatever you want )
https://www.amazon.com/ARDUINO-A000005-DEV-ATMEGA328-NANO/dp/B01873ITV8?keywords=arduino+nano&qid=1540312707&refinements=p_89%3AArduino&rnid=2528832011&sr=8-1&ref=sr_1_1

Arduino Nano Breakout Board	
https://www.amazon.com/gp/product/B00X3L2RJK/ref=oh_aui_detailpage_o00_s00?ie=UTF8&psc=1

Relay				
https://www.amazon.com/WINGONEER-KY-019-Channel-Module-arduino/dp/B06XHJ2PBJ?keywords=arduino+relay&qid=1540312767&s=Electronics&sr=1-3&ref=sr_1_3

Momentary Push Button		

https://www.adafruit.com/product/1009

2x 100k ohm resistor ( pull downs )
LED light 
220 ohm resistor for LED
Wires
Soldering Board / Breakout board / whatever
12v Power supply

1/4" tubes/connectors/shut off valve

-----------------------------------------------
General Notes
-----------------------------------------------

I used 1/4" water line to feed my system. My friedgerator already had a line feed to it
that I just T'd off of.  I then used the shut off valve to also act as a cheap regulator.
I did this so the water just trickles out vs blasting out at full pressure making a mess
and scaring my cat.

12v power supply brick to run to relay/solenoid valve.
Cut 12v wire to plug into relay. Then relay to the solenoid valve.
Then Ground wire from solenoid valve back the power brick ground.

-----------------------------------------------
Crude Diagram
-----------------------------------------------

![alt text](https://github.com/jdredd87/ArduinoWaterBowl/blob/master/waterdiagram.png)

-------------------------------------------
Video of this working
-------------------------------------------

https://www.youtube.com/watch?v=zO9HbENp8bs


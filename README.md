# Arduino Boblight

Arduino Boblight is an ambient light-solution for MediaPCs based on an Arduino Uno with a custom shield and the interface to the Boblight-daemon, which is the source of the desired colors.

## Arduino Shield

We've created a Shield for the Arduino Uno, which features some drivers for LEDs and 4 Channels (each with 3 LEDs - RGB) to connect our LED-Stripes to. You can find an EAGLE - diagram to build your own shield.

## Boblight

First of all, this project requires Boblight. So - unfortunately - it's neither working with regular receivers nor with vhs-player, consoles or any other video-device that does not support Boblight.

Here's what you need to run Arduino Boblight with XBMC on an Ubuntu-PC:

1. [XBMC](http://xbmc.org/)
2. [Boblight](https://code.google.com/p/boblight/wiki/Compiling)
3. [XBMC Boblight](http://forum.xbmc.org/showthread.php?tid=116331)

That's it. Now, all you have to do is:

* Build your Shield
* Connect your LED-Strips
* Setup your Boblight-Config (see Example)
* Setup your XBMC Boblight
* Have fun

## LED-Strips:

We used LED-Strips with **[+5V,R,G,B]** and connected them according to the diagram.

If you have any other LED-Stips (like **[+5V,Gnd,Gnd,Data In]**), this project will not work.


#### Used Arduino-Ports

* Channel 1
  * Port 2
  * Port 3
  * Port 4
* Channel 2
  * Port 5
  * Port 6
  * Port 7
* Channel 3
  * Port 8
  * Port 9
  * Port 10
* Channel 4
  * Port 11
  * Port 12
  * Port 13

## EAGLE

You need the [Arduino EAGLE](http://arduino.cc/en/Main/arduinoBoardUno) - Files to be able to open the diagram.

## Requirements:

#### Arduino
[SoftPWM](https://code.google.com/p/rogue-code/wiki/SoftPWMLibraryDocumentation)

#### Software
[XBMC](http://xbmc.org/)  
[Boblight](https://code.google.com/p/boblight/wiki/Compiling)  
[XBMC Boblight](http://forum.xbmc.org/showthread.php?tid=116331)  
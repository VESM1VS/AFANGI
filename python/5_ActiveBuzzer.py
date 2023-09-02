from machine import Pin

button = Pin(14,Pin.IN,Pin.PULL_UP)  # takki tengist pinna 14 og GND
activeBuzzer = Pin(21,Pin.OUT)       # buzzer tengist pinna 21 og GND, active buzzer er með svart tape á botninum.

activeBuzzer.value(0)                # höfum slökkt á active buzzer í upphafi,

while True:
    if not button.value():           # ef ýtt er á takka
        activeBuzzer.value(1)  	     # hljóð á
    else:
        activeBuzzer.value(0)        # hljóð af
        
        
"""
Ef magna á hljóðið (hafa hærra) þá er hægt að bæta við NPN transistor.
Sjá Chapter 7: Project 7.1 Doorbell (bls. 118 - 123) í Python_Tutorial.
"""

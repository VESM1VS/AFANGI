from machine import Pin

led = Pin(2, Pin.OUT)
takki = Pin(14, Pin.IN, Pin.PULL_UP)	# vír tengdur í GND, upphafsstaða er 1

while True:
    if not takki.value():   # ef ýtt er á takka þá er gildið 0 lesið af takka
        led.value(1)        # led on
    else:
        led.value(0)        # led off, ekki ýtt á takka eða takka sleppt
        

from machine import Pin

led = Pin(2, Pin.OUT)

#create button object from pin13, Set Pin13 to Input
button = Pin(13, Pin.IN, Pin.PULL_UP) 

while True:
    if button.value():      # ef ekki er ýtt á takka þá er gildið 1 lesið, útaf Pin.PULL_UP stillingu
        led.value(0)  #led off
    else:
        led.value(1)  #led on


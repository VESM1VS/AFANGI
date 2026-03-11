# Takki sem kveikir á led. Notum 0 eða 1 fyrir takka
# Tengingar og kóði: https://wokwi.com/projects/409365625870394369

from machine import Pin

led = Pin(4, Pin.OUT)
takki = Pin(2, Pin.IN, Pin.PULL_UP)	 # vír tengdur í GND, upphafsstaða er 1

while True:
    if not takki.value():   # ef ýtt er á takka þá er gildið 0 lesið af takka, líka hægt if takki.value() == 0:
        led.value(1)        # led on
    else:
        led.value(0)        # led off (ekki ýtt á takka eða takka sleppt)

# Nánar um if statements i Python:  https://www.w3schools.com/python/python_conditions.asp

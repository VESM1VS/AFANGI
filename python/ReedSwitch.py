from machine import Pin
from time import sleep_ms

led = Pin(2, Pin.OUT)
snertiskynjari = Pin(13, Pin.IN, Pin.PULL_UP)   

while True:
    if snertiskynjari.value():      # ef reitur er tómur þá er gildið 1 lesið.
        led.value(0)  # led off
    else:
        led.value(1)  # led on, þegar reitur er snertur.

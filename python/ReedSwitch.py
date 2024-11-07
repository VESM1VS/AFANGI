# ReedSwitch sem virkar með segul
# Passa að beygla ekki ReedSwitch vírana (brotna auðveldlega)
from machine import Pin
from time import sleep_ms

led = Pin(4, Pin.OUT)
reed = Pin(2, Pin.IN, Pin.PULL_UP)    

while True:
    if reed.value():      # ef reitur er tómur þá er gildið 1 lesið.
        led.value(0)      # led off
    else:
        led.value(1)      # led on, þegar reitur er snertur.

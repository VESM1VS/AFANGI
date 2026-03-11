# wokwi: https://wokwi.com/projects/452535111758977025
# kveikjum á öllum leds, eitt í einu, endurtekur sig endalaust.
from machine import Pin
from random import randint  # til að geta unnið með random
from time import sleep_ms 

led1 = Pin(2, Pin.OUT)
led2 = Pin(4, Pin.OUT) 
led3 = Pin(5, Pin.OUT) 

# notum lista til að halda utan um mörg gildi.
pins = [led1, led2, led3]	

while True:
    for i in pins:
        i.value(1)            # Skrifum 3.3V út fyrst á pinna 2 svo á 5 og að lokum 6.
        sleep_ms(1000)        # Leyfum því að loga í 1 sek 
        i.value(0)            # slökkvum á led

# nánar um for lykkju: https://www.w3schools.com/python/python_for_loops.asp

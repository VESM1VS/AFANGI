# Wokwi: https://wokwi.com/projects/452533563326722049

from machine import Pin
from random import randint  # til að geta unnið með random
from time import sleep_ms 

led1 = Pin(2, Pin.OUT)
led2 = Pin(4, Pin.OUT) 
led3 = Pin(5, Pin.OUT) 

# notum lista til að halda utan um mörg gildi.
pins = [led1, led2, led3]	

while True:
    randomLed = randint(0, 2)   # random skilar gildinu 0, 1 eða 2.
    print(randomLed)            # skrifum random gildið í Shell.
    pins[randomLed].value(1)    # Skrifum 3.3V út á pinna 2, 5 eða 6.
    sleep_ms(1000)              # Leyfum því að loga í 1 sek 
    pins[randomLed].value(0)    # slökkvum á led


# nánar um lista: https://www.w3schools.com/python/python_lists.asp

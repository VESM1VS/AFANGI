# https://wokwi.com/projects/441804604337655809
from machine import Pin
import neopixel
import time

# LEDPixel tenging ( IN )
# S digital pinni
# V 5V
# G GND

pin = Pin(48, Pin.OUT)
np = neopixel.NeoPixel(pin, 8)	# 8 x RGB Leds

# breytur
brightness = 255                # birtustig frá 0 - 255

# búum til liti með RGB litakerfi.
red   =  [ brightness, 0, 0]    # red
green =  [ 0, brightness, 0]    # green  
blue  =  [ 0, 0, brightness]    # blue
off   =  [ 0, 0, 0]             # ekkert ljós

while True:
    # stjórnum öllum 8 leds í einu með að nota fill
    np.fill([0, 0, 0])     # ekkert ljós
    
    # led 1  
    np[0] = red		        # eða np[0] = [255, 0, 0] 
    np.write()              # kveikjum á led 1
    time.sleep_ms(500)      # hinkrum í hálfa sek. þar til við gerum eitthvað annað.

    # led 2
    np[1] = green	        
    np.write()
    time.sleep_ms(500)

    # led 3
    np[2] = blue	       
    np.write()
    time.sleep_ms(500)
    
    np[0] = off            
    np[1] = off
    np[2] = off
    np.write()	

    time.sleep_ms(1000) 
    

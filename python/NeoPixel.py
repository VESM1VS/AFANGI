from machine import Pin
import neopixel
import time

# LEDPixel tenging ( IN )
# S digital pinni
# V 5V
# G GND
pin = Pin(48, Pin.OUT)
np = neopixel.NeoPixel(pin, 8)			# 8 x RGB Leds

brightness=100   						      # brightness: 0 - 255
red   =  [ brightness, 0, 0]			# red
green =  [ 0, brightness, 0]	    # green  
blue  =  [ 0, 0, brightness]      # blue
off   =  [ 0, 0, 0]               # ekkert ljós

while True:
    np[0] = red		# led 1
    np.write()
    time.sleep_ms(500)
    
    np[1] = green	# led 2
    np.write()
    time.sleep_ms(500)
    
    np[2] = blue	# led 3
    np.write()
    time.sleep_ms(500)
    
    np[0] = off
    np[1] = off
    np[2] = off
    np.write()	

    time.sleep_ms(1000) 
    

    


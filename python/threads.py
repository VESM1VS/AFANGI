import _thread as th
from stepmotor import mystepmotor
from servo import Servo
import time

myStepMotor = mystepmotor(14,13,12,11)
myServo = Servo(pin=21)

servo_running = True
stepper_running = True

def pinball_servo():
    while servo_running:
        myServo.move(45) # tourne le servo à 0°
        time.sleep(0.3)
        myServo.move(90) # tourne le servo à 0°
        time.sleep(0.3)
     
def pinball_stepper():
    while stepper_running:
        myStepMotor.moveAround(1,2,2000)
        myStepMotor.stop()

th.start_new_thread(pinball_servo,())
th.start_new_thread(pinball_stepper,())

"""
while True:
    if gameover:
        servo_running = False
        stepper_running = False
""" 

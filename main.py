import serial  # Install using 'pip install pyserial'
import time  # Required to use delay functions
import pyautogui # Install using 'pip install pyautogui'
import pydirectinput
ArduinoSerial = serial.Serial('COM4', 9600)  # Create Serial port object called arduinoSerialData
time.sleep(2)

while 1:
    incoming = str(ArduinoSerial.readline())  # read
    print(incoming)


    if 'W' in incoming:
        pydirectinput.keyUp('up')

    if 'S' in incoming:
        pydirectinput.keyUp('down')

    if 'A' in incoming:
        pydirectinput.keyUp('right')

    if 'D' in incoming:
        pydirectinput.keyUp('left')

    if 'L5' in incoming:
        pydirectinput.typewrite(['space'], 0.2)


    incoming = ""
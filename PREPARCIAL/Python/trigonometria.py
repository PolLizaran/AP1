from easyinput import read
import math

def main():
    angle = read(float)
    while angle is not None:
        print ("{:.6f}".format( math.sin(angle * (math.pi / 180))), "{:.6f}".format (math.cos(angle * (math.pi / 180))))
        angle = read(float)
main()

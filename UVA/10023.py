import sys
import math
import decimal

def IS_sqrt(temp):
    x = temp
    y = (x + 1) // 2
    while y < x:
        x = y
        y = (x + temp // x) // 2
    return x

in1 = input()
in1 = int(in1)
while in1 > 0:
    input()
    in2 = input()
    in2 = int(in2)
    print(IS_sqrt(in2))
    if in1 > 1:
        print()
    in1-=1

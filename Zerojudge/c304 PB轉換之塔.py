import sys

while True:
    try:
        in1 = input()
    except EOFError:
        break
    in2 = str(in1)[::-1]
    print(int(in1)+int(in2))
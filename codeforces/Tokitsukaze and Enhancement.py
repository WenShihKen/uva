'''
    Author: Ken
    Date: 2020-02-03
    Problems: 1191A
'''

x = int(input())
temp = x & 3
if temp == 0:
    print("1 A")
elif temp == 1:
    print("0 A")
elif temp == 2:
    print("1 B")
elif temp == 3:
    print("2 A")

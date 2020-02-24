'''
    Author: Ken
    Problems: 550B
'''
in1 = int(input())
for _ in range(in1):
    a, b = map(int, input().split())
    if a == b:
        print(0)
    if a < b:
        if (b-a) & 1 == 0:
            print(2)
        else:
            print(1)
    elif a > b:
        if (a-b) & 1 == 0:
            print(1)
        else:
            print(2)

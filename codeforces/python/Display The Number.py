'''
    Author: Ken
    Problems: 1295A
'''

t = int(input())
for _ in range(t):
    n = int(input())
    if n & 1 == 0:
        for _ in range(n >> 1):
            print(1, end='')
        print()
    else:
        if n == 3:
            print(7)
        else:
            print(7, end='')
            for _ in range((n-3) >> 1):
                print(1, end='')
            print()

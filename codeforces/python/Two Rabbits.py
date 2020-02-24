'''
    Author: Ken
    Problems: 1304A
'''
in1 = int(input())
for _ in range(in1):
    x, y, a, b = map(int, input().split())
    if (y-x) % (a+b) != 0:
        print(-1)
    else:
        print(int((y-x) / (a+b)))

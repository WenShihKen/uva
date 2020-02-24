'''
    Author: Ken
    Problems: 1315A
'''
in1 = int(input())
for _ in range(in1):
    a, b, x, y = map(int, input().split())
    ans = max((a-x-1)*b, (b-y-1)*a, y*a, x*b)
    print(ans)

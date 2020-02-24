'''
    Author: Ken
    Problems: 1313A
'''
in1 = int(input())
for _ in range(in1):
    in2 = []
    in2 = list(map(int, input().split()))
    in2.sort()
    ans = 0
    for i in range(len(in2)):
        if in2[i] > 0:
            in2[i] -= 1
            ans += 1
    if in2[0] > 0 and in2[2] > 0:
        in2[0] -= 1
        in2[2] -= 1
        ans += 1
    if in2[1] > 0 and in2[2] > 0:
        in2[1] -= 1
        in2[2] -= 1
        ans += 1
    if in2[0] > 0 and in2[1] > 0:
        in2[0] -= 1
        in2[1] -= 1
        ans += 1
    if in2[0] > 0 and in2[1] > 0 and in2[2] > 0:
        in2[0] -= 1
        in2[1] -= 1
        in2[2] -= 1
        ans += 1
    print(ans)

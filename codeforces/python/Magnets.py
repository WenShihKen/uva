'''
    Author: Ken
    Problems: 334A
'''

in1 = int(input())
ans = 1
in2 = input()
for _ in range(in1-1):
    in3 = input()
    if in2 != in3:
        ans += 1
        in2 = in3
print(ans)

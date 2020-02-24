'''
    Author: Ken
    Problems: 1296B
'''
in1 = int(input())
for _ in range(in1):
    in2 = int(input())
    ans = in2
    while(int(in2/10) > 0):
        ans += int(in2/10)
        in2 = (in2 % 10)+int(in2/10)
    print(ans)

'''
    Author: Ken
    Problems: 1296A
'''

in1 = int(input())
for _ in range(in1):
    in2 = int(input())
    in3 = []
    in3 = list(map(int, input().split()))
    if sum(in3) & 1 == 1:
        print("YES")
    else:
        odd = False
        even = False
        for i in range(in2):
            if in3[i] & 1 == 0:
                even = True
            else:
                odd = True
        if even == False or odd == False:
            print("NO")
        else:
            print("YES")

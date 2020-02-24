'''
    Author: Ken
    Problems: 1287A
'''

in1 = int(input())

for _ in range(in1):
    in2 = int(input())
    in3 = input()
    ans = 0
    for i in range(in2):
        temp = 0
        if in3[i] == 'A':
            i += 1
            while i < in2 and in3[i] == 'P':
                temp += 1
                i += 1
        ans = max(ans, temp)
    print(ans)

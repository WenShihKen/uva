'''
    Author: Ken
    Date: 2020-02-04
    Problems: 550A
'''

s = input()
flag = 0
if s.find("AB") >= 0:
    temp = s.find("AB")
    if s.find("BA", temp+2) >= 0:
        flag = 1

if s.find("BA") >= 0:
    temp = s.find("BA")
    if s.find("AB", temp+2) >= 0:
        flag = 1

if flag == 1:
    print("YES")
else:
    print("NO")

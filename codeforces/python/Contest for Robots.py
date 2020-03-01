'''
    Author: Ken
    Problems: 1321A
'''
t = int(input())

r = []
b = []
r = list(map(int, input().split()))
b = list(map(int, input().split()))
flag = 0
rr = 0
bb = 0
same = 0
for i in range(len(r)):
    if r[i] != b[i]:
        flag += 1
    if r[i] > b[i]:
        rr += 1
    if r[i] < b[i]:
        bb += 1
    if r[i] == b[i]:
        same += 1
if flag == 0 or rr == 0:
    print(-1)
else:
    print(int((rr+bb)//rr))

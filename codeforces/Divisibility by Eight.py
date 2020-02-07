'''
    Author: Ken
    Date: 2020-02-04
    Problems: 550C
'''

ans = -1
n = input()


def dfs(start, end, count, temp):
    global ans
    if count <= 3 and temp & 7 == 0:
        ans = temp
        return
    if count > 3:
        return
    for i in range(end+1, len(n)):
        dfs(start, i, count+1, temp*10+(int(n[i])))


for i in range(len(n)):
    count = 1
    dfs(i, i, count, int(n[i]))
    if(ans != -1):
        break

if ans == -1:
    print("NO")
else:
    print("YES")
    print(ans)

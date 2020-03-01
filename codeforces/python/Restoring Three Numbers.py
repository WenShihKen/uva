'''
    Author: Ken
    Problems: 1154A
'''
t = []
t = list(map(int, input().split()))
t.sort()
a = t[3]-t[2]
b = t[3]-t[1]
c = t[3]-t[0]

print(a, b, c)

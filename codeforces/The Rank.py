'''
    Author: Ken
    Date: 2020-02-03
    Problems: 1017A
'''

n = int(input())
a, b, c, d = map(int, input().split())
score = a+b+c+d
rank = 1

for _ in range(n-1):
    a, b, c, d = map(int, input().split())
    temp = a+b+c+d
    if(temp > score):
        rank += 1

print(rank)

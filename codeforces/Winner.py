'''
    Author: Ken
    Date: 2020-02-02
    Problems: 2A
'''

from collections import Counter

n = int(input())
all = Counter()
temp = []

for _ in range(n):
    name, score = input().split()
    all[name] += int(score)
    temp.append((name, all[name]))

max_value = max(all.values())

for x, y in temp:
    if y >= max_value and all[x] == max_value:
        print(x)
        break

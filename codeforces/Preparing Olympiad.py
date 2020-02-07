'''
    Author: Ken
    Date: 2020-02-06
    Problems: 550B
'''
import sys

n, l, r, x = map(int, input().split())
temp = []
temp = list(map(int, input().split()))

temp.sort()
ans = 0

for i in range(1 << n):
    score = 0
    _min = sys.maxsize
    _max = -sys.maxsize
    for j in range(n):
        if i & (1 << j) > 0:
            _min = min(_min, temp[j])
            _max = max(_max, temp[j])
            score += temp[j]
    if score >= l and score <= r and _max-_min >= x:
        ans += 1

print(ans)

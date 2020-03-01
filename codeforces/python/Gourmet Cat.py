'''
    Author: Ken
    Problems: 1154C
'''
eat = []
eat = list(map(int, input().split()))
temp = min(int(eat[0]/3), int(eat[1]/2), int(eat[2]/2))
ans = temp*7
eat[0] -= temp*3
eat[1] -= temp*2
eat[2] -= temp*2
day = [0, 1, 2, 0, 2, 1, 0]
cir = -1
for i in range(7):
    count = 0
    temp = list.copy(eat)
    for j in range(7):
        # print(eat)
        if temp[day[(i+j) % 7]] == 0:
            cir = max(cir, count)
            break
        count += 1
        temp[day[(i+j) % 7]] -= 1
print(ans+cir)
# 1 4 7
# 2 6
# 3 5
# abcacba

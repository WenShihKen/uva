'''
    Author: Ken
    Problems: 1154B
'''
t = int(input())
all = []
all = list(set(map(int, input().split())))
all.sort()
if len(all) > 3:
    print(-1)
elif len(all) == 3:
    if all[2]-all[1] == all[1]-all[0]:
        print(all[2]-all[1])
    else:
        print(-1)
elif len(all) == 2:
    if (all[1]-all[0]) & 1 == 0:
        print(int((all[1]-all[0])/2))
    else:
        print(all[1]-all[0])
elif len(all) == 1:
    print(0)

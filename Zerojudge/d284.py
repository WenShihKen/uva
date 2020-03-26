#
# @judge Zerojudge
# @id d284
# @name 漂亮數碼
# @contest
#
# @tag math, dp, combination
#
while(True):
    n = int(input())
    if n == 0:
        break
    x = 9
    for i in range(1, n):
        x = x*8+(10**i)
    print(x)

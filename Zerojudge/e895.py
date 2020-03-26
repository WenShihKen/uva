#
# @judge Zerojudge
# @id e895
# @name 好多正方形
# @contest
#
# @tag math, dp
#
dp = [0]*100005
dp[0] = 0
dp[1] = 1
for i in range(2, 100003):
    dp[i] = dp[i-1] << 1
    if dp[i] >= 10007:
        dp[i] -= 10007

while True:
    try:
        n = int(input())
        print(dp[n])
    except EOFError:
        break

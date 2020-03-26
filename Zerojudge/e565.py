#
# @judge Zerojudge
# @id e565
# @name Simple division
# @contest
#
# @tag math
#


def gcd(a, b) -> int:
    if b == 0:
        return a
    return gcd(b, a % b)


while(True):
    n = list(map(int, input().split()))
    if len(n) == 1 and n[0] == 0:
        break
    nn = []
    for i in range(len(n)-2):
        nn.append(abs(n[i]-n[i+1]))
    ans = nn[0]
    for i in range(1, len(nn)):
        ans = gcd(ans, nn[i])
    print(ans)

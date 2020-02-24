'''
    Author: Ken
    Problems: 1307B
'''
in1 = int(input())
for _ in range(in1):
    n, x = map(int, input().split())
    a = []
    a = list(map(int, input().split()))
    ans = 2147483647
    for i in range(len(a)):
        temp = 2  # triangle
        if a[i] <= x:
            temp = int(x/a[i])
            if x % a[i] > 0:
                temp += 1
        ans = min(ans, temp)
    print(ans)

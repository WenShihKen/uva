'''
	@judge Zerojudge
	@id d142
	@name Square root
 
	@tag Math
'''


def IS_sqrt(temp):
    x = temp
    y = (x + 1) // 2
    while y < x:
        x = y
        y = (x + temp // x) // 2
    return x


in1 = int(input())
for _ in range(in1):
    input()
    in2 = int(input())
    print(IS_sqrt(in2))

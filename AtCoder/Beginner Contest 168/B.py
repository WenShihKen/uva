#
# @judge Atcoder
# @id B
# @name ... (Triple Dots)
# @contest Beginner Contest 168
#
# @tag ad-hoc
#
n = int(input())
s = input()

if(len(s) > n):
    print(s[0:n]+"...")
else:
    print(s)

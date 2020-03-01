t = int(input())
s = input()
times = []
for _ in range(26):
    times.append(0)
for i in range(26):
    for j in range(len(s)):
        if i == ord(s[j])-97:
            times[i] += 1
for i in range(25, 0, -1):

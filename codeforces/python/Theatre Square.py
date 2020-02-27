'''
    Author: Ken
    Problems: 1A
'''

import math
n, m, a = map(int, input().split())
print((int(math.ceil(n/a)))*(int(math.ceil(m/a))))

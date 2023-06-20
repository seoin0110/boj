import sys
sys.setrecursionlimit(100000000)

from collections import deque

n, m, a, b= map(int,sys.stdin.readline().split())
M = [0 for i in range(n+1)]
for i in range(m):
    l,r = map(int, sys.stdin.readline().split())
    for j in range(l,r+1):
        M[j] = -1

def func(f):
    if f == 0:
        return 0
    if f < 0:
        return 1000000000
    if M[f] > 0:
        return M[f]
    if M[f] == -1:
        return 1000000000
    else:
        M[f] = min(func(f-a)+1, func(f-b)+1)
        return M[f]
ans = func(n)
if ans >= 1000000000:
    print(-1)
else:
    print(ans)

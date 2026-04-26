import sys

def gcd(a, b):
    if b == 0:
        return a
    else:
        return gcd(b, a % b)

N, L = map(int, sys.stdin.readline().split())
A = list(map(int, sys.stdin.readline().split()))
B = list(map(int, sys.stdin.readline().split()))

yes = []
no = []
for i in range(N):
    if B[i] == 1:
        yes.append(A[i])
    else:
        no.append(A[i])
yes.sort()
no.sort()
if len(yes) == 0:
    flag = -1
    chk = [0 for i in range(2000000)]
    for i in no:
        tmp = i
        while tmp < 2000000 and chk[tmp] == 0:
            chk[tmp] = 1
            tmp += i
    for i in range(1,200002):
        if chk[i] == 0:
            flag = i
            break
    if flag <= L:
        print(flag)
    else:
        print(-1)
else:
    ans = yes[0]
    now = yes[0]
    for i in range(1, len(yes)):
        now = now * yes[i] // gcd(now, yes[i])
        ans = now
        if now > L:
           ans = -1
           break
    if now > L:
        ans = -1
    for i in no:
        if now % i == 0:
            ans = -1
            break
    print(ans)

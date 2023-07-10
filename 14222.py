n, k = map(int,input().split())
arr = list(map(int,input().split()))
chk = [0 for i in range(51)]
i = 1
for i in arr:
    chk[i] += 1
ans = 1
for i in range(1,n+1):
    if chk[i] == 0:
        ans = 0
        break
    elif chk[i] >= 2:
        if i+k > n:
            ans = 0
            break
        chk[i+k] += chk[i]-1
        chk[i] = 1
    
print(ans)

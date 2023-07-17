n, m = map(int,input().split())
s = list(map(int,input().split()))
dp = [0 for j in range(n+1)]
k = set(s)

for i in range(len(s)):
    for j in range(i+1,len(s)):
        k.add(s[i] + s[j])

for i in range(1,n+1):
    for j in k:
        if i - j < 0:
            continue
        if i-j != 0 and dp[i-j] == 0:
            continue
        if dp[i] == 0:
            dp[i] = dp[i - j] + 1
        else:
            dp[i] = min(dp[i-j]+1,dp[i])
if dp[n] == 0:
    print(-1)
else:
    print(dp[n])

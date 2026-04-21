a, b, c, k = map(int, input().split())
dp = [[100000000 for i in range(4)] for j in range(k+1)]
dp[0][0] = 0
for i in range(0, k+1):
    for j in range(4):
        if dp[i][j] == 100000000:
            continue
        if i + a <= k:
            dp[i + a][(j + 3) % 4] = min(dp[i + a][(j + 3) % 4], dp[i][j] + 1);
        if i + b <= k:
            dp[i + b][(j + 1) % 4] = min(dp[i + b][(j + 1) % 4], dp[i][j] + 1);
        if i + c <= k:
            dp[i + c][(j + 2) % 4] = min(dp[i + c][(j + 2) % 4], dp[i][j] + 1);
        
if dp[k][0] == 100000000:
    print(-1)
else:
    print(dp[k][0])

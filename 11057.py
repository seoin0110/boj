n = int(input())
dp = [[0 for i in range(10)] for j in range(1000)]
for i in range(10):
    dp[0][i] = 1
    dp[1][i] = 10 - i

if n >=2:
    for i in range(2,n):
        for j in range(10):
            tmp = 0
            for k in range(j,10):
                tmp += dp[i-1][k]
            dp[i][j] = tmp
print(sum(dp[n-1])%10007)

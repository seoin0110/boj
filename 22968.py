t = int(input())
dp = [0 for i in range(50)]
dp[1] = 1
dp[2] = 2
dp[3] = 4
for i in range(4,50):
    dp[i] = dp[i-1] + dp[i-2] + 1
for i in range(t):
    v = int(input())
    tmp = 1
    while v >= dp[tmp+1]:
        tmp += 1
    print(tmp)

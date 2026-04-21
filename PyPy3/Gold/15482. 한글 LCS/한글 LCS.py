dp = [[0]*1000 for i in range(1000)]*1000

s1 = input()
s2 = input()
if (s1[0] == s2[0]):
    dp[0][0] = 1
for i in range(1,len(s1)):
    if (s1[i] == s2[0]):
        dp[i][0] = 1
    else:
        dp[i][0] = min(dp[i - 1][0], 1)
for i in range(1,len(s2)):
    if (s2[i] == s1[0]) :
        dp[0][i] = 1
    else :
        dp[0][i] = min(dp[0][i - 1], 1)
for i in range(1,len(s1)):
    for j in range(1,len(s2)):
        if (s1[i] == s2[j]) :
            dp[i][j] = dp[i - 1][j - 1] + 1
        else:
            dp[i][j] = max(dp[i - 1][j], dp[i][j - 1])
print(dp[len(s1)- 1][len(s2)- 1])

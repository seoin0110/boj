n = int(input())
ans = 0
arr = [[0, 0] for i in range(n)]
for i in range(n):
    arr[i][0], arr[i][1] = map(int,input().split())
arr.sort()
dp = [ 1 for i in range(n)]
for i in range(n):
    for j in range( 0, i):
        if (arr[i][0] - arr[j][0]) * (arr[i][1] - arr[j][1]) >= 0:
            dp[i] = max(dp[i], dp[j] + 1)
    
print(n - max(dp))

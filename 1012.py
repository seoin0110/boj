import sys
sys.setrecursionlimit(100000)

T = int(input())
X = [0,0,1,-1]
Y = [1,-1,0,0]

def dfs(x,y):
   global arr
   for i in range(4):
       if arr[x + X[i]][y+Y[i]] == 1:
           arr[x + X[i]][y+Y[i]] = 2
           dfs(x + X[i], y+Y[i])
for t in range(T):
    M, N, K = list(map(int, input().split()))
    arr = [[0 for n in range(N+2)] for m in range(M+2)]
    for k in range(K):
        x,y = list(map(int, input().split()))
        x += 1
        y += 1
        arr[x][y] = 1
    ans = 0
    for m in range(M):
        for n in range(N):
            x = m+1
            y = n+1
            if arr[x][y] == 1:
                ans += 1
                dfs(x,y)
    print(ans)

import sys
sys.setrecursionlimit(10**7)

n = int(input())
graph = [[0 for i in range(n)] for j in range(n)]
for i in range(n):
    b = int(input())
    graph[i][b-1] = 1
ans = []
def dfs(l, a):
    for i in range(n):
        if graph[a][i] == 1:
            if l[0] == i: #cycle이 생긴 경우
                ans.extend(l)
                return
            elif i in l:
                return
            l.append(i)
            dfs(l,i)
            l.pop()
for i in range(n):
    dfs([i],i)
ans = sorted(list(set(ans)))
print(len(ans))
for i in ans:
    print(i+1)

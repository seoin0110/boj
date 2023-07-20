import sys
from queue import PriorityQueue
n, m, x = map(int,input().split())
edges = [[] for i in range(n+1)]
edges2 = [[] for i in range(n+1)]
for i in range(m):
    a,b,c = map(int,sys.stdin.readline().split())
    edges[a].append((c,b))
    edges2[b].append((c,a))

que = PriorityQueue()
path = [10000000 for i in range(n+1)]
for i in edges[x]:
    path[i[1]] = i[0]
    que.put(i)

chk = [0 for i in range(n+1)]
chk[x] = 1
path[x] = 0
cnt = 1
now = x
while cnt < n and que.qsize() > 0:
    m = que.get()
    if chk[m[1]] == 1:
        continue
    now = m[1]
    cnt += 1
    chk[now] = 1
    for i in edges[now]:
        if chk[i[1]] == 1:
            continue
        path[i[1]] = min(path[i[1]], i[0] + path[now])
        que.put((path[i[1]], i[1]))


que2 = PriorityQueue()
path2 = [10000000 for i in range(n+1)]
for i in edges2[x]:
    path2[i[1]] = i[0]
    que2.put(i)

chk2 = [0 for i in range(n+1)]
chk2[x] = 1
path2[x] = 0
cnt = 1
now = x
while cnt < n and que2.qsize() > 0:
    m = que2.get()
    if chk2[m[1]] == 1:
        continue
    now = m[1]
    cnt += 1
    chk2[now] = 1
    for i in edges2[now]:
        if chk2[i[1]] == 1:
            continue
        path2[i[1]] = min(path2[i[1]], i[0] + path2[now])
        que2.put((path2[i[1]], i[1]))
  
ans = 0
for i in range(1, n+1):
    ans = max(ans, path[i] + path2[i])
print(ans)

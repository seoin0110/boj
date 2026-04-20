n, m = map(int, input().split())
import heapq
distance = [[] for i in range(n)]
flag = [0 for i in range(n)]
ans = [10**8 for i in range(n)]
ans[0] = 0
hq = []
for i in range(m):
    a, b, c = map(int, input().split())
    distance[a-1].append([b-1, c])
    distance[b-1].append([a-1, c])
heapq.heappush(hq, (0, 0))
while len(hq) > 0:
    dis, now = heapq.heappop(hq)
    if dis > ans[now]:
        continue
    if now == n-1:
        break
    flag[now] = 1
    for next_idx, d in distance[now]:
        if flag[next_idx] != 0:
            continue
        nd = dis + d
        if nd < ans[next_idx]:
            ans[next_idx] = nd
            heapq.heappush(hq, (nd, next_idx))
print(ans[n-1])

from collections import deque

n, k = map(int, input().split())
if n >= k:
    print(n - k)
else:
    q = deque()
    q.append([n,0])
    ans = [0 for i in range(100001)]
    while len(q) > 0:
        tmp = q.popleft()
        if ans[tmp[0]] != 0:
            continue
        else:
            ans[tmp[0]] = 1
        if tmp[0] == k:
            print(tmp[1])
            break
        if tmp[0] * 2 <= 100000 and ans[tmp[0] * 2] == 0:
            q.appendleft([tmp[0] * 2, tmp[1]])
        if tmp[0] + 1 <= 100000 and ans[tmp[0] + 1] == 0:
            q.append([tmp[0] + 1, tmp[1] + 1])
        if tmp[0] > 1 and ans[tmp[0] - 1] == 0:
            q.append([tmp[0] - 1, tmp[1] + 1])

from collections import deque
dx = [0,1,0,-1,1,1,-1,-1]
dy = [1,0,-1,0,1,-1,1,-1]
while True:
    w, h = map(int, input().split())
    if w == 0 and h == 0:
        break
    ans = 0
    l = [[] for i in range(h)]
    for i in range(h):
        l[i] = list(map(int,input().split()))
    for i in range(h):
        for j in range(w):
            if l[i][j] == 1:
                ans += 1
                q = deque()
                q.append([i,j])
                while len(q)>0:
                    tmp = q.popleft()
                    if l[tmp[0]][tmp[1]] != 1:
                        continue
                    l[tmp[0]][tmp[1]] = 0
                    for k in range(8):
                        if 0 <= tmp[0]+dy[k] < h and 0 <= tmp[1] + dx[k] < w and l[tmp[0]+dy[k]][tmp[1]+dx[k]] > 0:
                            q.append([tmp[0]+dy[k], tmp[1]+dx[k]])
                
    print(ans)

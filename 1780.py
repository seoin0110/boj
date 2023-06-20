n = int(input())
arr = [[] for j in range(n)]
for i in range(n):
    arr[i] = list(map(int,input().split()))
dx = [0,1,2,0,1,2,0,1,2]
dy = [0,0,0,1,1,1,2,2,2]
ans = [0, 0, 0]
def func(x,y,f):
    global ans
    if f == 1:
        ans[arr[x][y]+1] += 1
        return 1
    tmp = arr[x][y]
    flag = 1
    for i in range(f):
        for j in range(f):
            if tmp != arr[x+i][y+j]:
                flag = 0
                break
    if flag:
        ans[tmp+1] += 1
        return 1
    
    for i in range(9):
        func(x+dx[i]*(f//3), y+dy[i]*(f//3), (f//3))

func(0,0,n)
for i in range(3):
    print(ans[i])

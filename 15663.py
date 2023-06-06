n, m = map(int, input().split())
arr = map(int, input().split())
arr.sort()
ans = []
check = [0 for i in range(n)]
tmp = [0 for i in range(m)]

def func(k):
    if k == m:
        ans.append(tmp.copy())
        return
    if check[0] == 0:
        check[0] = 1
        tmp[k] = arr[0]
        func(k+1)
        check[0] = 0
    for i in range(1,n):
        if check[i] == 0:
            check[i] = 1
            tmp[k] = arr[i]
            func(k+1)
            check[i] = 0

func(0)

ans.sort()
for i in ans[0]:
    print(i,end=' ')
print()
for i in range(1,len(ans)):
    if ans[i] != ans[i-1]:
        for j in ans[i]:
            print(j,end=' ')
        print()

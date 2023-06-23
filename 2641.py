n = int(input())
arr = list(map(int,input().split()))
m = int(input())
arr2 = [[] for i in range(m)]
ans = []
for i in range(m):
    arr2[i] = list(map(int,input().split()))
    flag = 0
    tmp = arr2[i].copy()
    for j in range(n):
        same1 = 1
        same2 = 1
        for k in range(n):
            if tmp[k] != arr[k]:
                same1 = 0
            if (tmp[k] + 1) % 4 + 1 != arr[n-k-1]:
                same2 = 0
        if same1 == 1 or same2 == 1:
            flag = 1
            break
        tmp.insert(0, tmp[n-1])
        tmp.pop()
    if flag == 1:
        ans.append(arr2[i])
print(len(ans))
for i in ans:
    for j in i:
        print(j, end=' ')
    print()

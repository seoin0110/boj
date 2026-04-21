n = int(input())
arr = list(map(int,input().split()))

tmp = arr[n-1]* arr[n-2] + 1
tmp2 = arr[n-1]
for i in range(n-3, -1, -1):
    tmp, tmp2 = tmp * arr[i] + tmp2, tmp
tmp, tmp2 = tmp - tmp2,tmp
print(tmp, tmp2)

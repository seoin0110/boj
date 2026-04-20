n, k = map(int, input().split())
arr = []
for i in range(n):
    arr.append(int(input()))
    
arr.sort()
ans = 0
for i in range(n-k):
    ans += arr[i]
print(ans)

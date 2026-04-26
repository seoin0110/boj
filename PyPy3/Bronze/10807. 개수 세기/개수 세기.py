n = int(input())
arr = list(map(int, input().split()))
m = int(input())
ans = 0
for i in arr:
    if i==m:
        ans+=1
print(ans)
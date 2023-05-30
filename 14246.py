n = int(input())
arr = [0]
arr.extend(map(int,input().split()))
k = int(input())
for i in range(1,len(arr)):
   arr[i] += arr[i-1]
l = 0
r = 1
ans = 0
while r < len(arr):
   if arr[r] - arr[l] >k:
      ans += (len(arr)-r)
      l += 1
   else:
      r += 1
print(ans)

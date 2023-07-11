n = int(input())
arr = list(map(int,input().split()))
arr_odd = [0 for i in range(n//2 + 1)]
arr_even = [0 for i in range (n//2 + 1)]
sum_a = 0
sum_b = 0
for i in range(n):
    if i%2 == 0:
        arr_even[i//2 + 1] = arr[i] + arr_even[i//2]
        sum_a += arr[i]
    else:
        arr_odd[i//2 + 1] = arr[i] + arr_odd[i//2]
        sum_b += arr[i]

ans = sum_a
for i in range(n-1):
    if i % 2 == 0:
        ans = max(ans, arr_even[i//2] + arr_odd[n//2] - arr_odd[i//2])
    else:
        ans = max(ans, arr_even[(i+1)//2] + arr_odd[n//2 - 1] - arr_odd[i//2])
print(ans)

n = int(input())
arr = [0 for i in range(n+1)]
for i in range(n):
    arr[i+1] = int(input())
arr.sort()
for i in range(n):
    arr[i+1] += arr[i]
if (n*3) % 20 != 0:
    if (n*3) / 20 >= (n*3) // 20 + 0.5:
        ans = (n*3) // 20 + 1
    else:
        ans = (n*3) // 20
else:
    ans = (n*3) // 20
if n == 0:
    print(0)
else:
    if (arr[n-ans] - arr[ans])/(n-2*ans) >= (arr[n-ans] - arr[ans])//(n-2*ans) + 0.5:
        print((arr[n-ans] - arr[ans])//(n-2*ans) + 1)
    else:
        print((arr[n-ans] - arr[ans])//(n-2*ans))

arr = []
ans = 0
for i in range(11):
    d, v = map(int, input().split())
    ans += 20 * v
    arr.append(d)

arr.sort()
now = 0
for i in range(11):
    now += arr[i]
    ans += now
print(ans)
    
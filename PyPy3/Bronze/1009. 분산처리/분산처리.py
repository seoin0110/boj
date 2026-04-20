t = int(input())
for i in range(t):
    a, b = map(int, input().split())
    ans = 1
    for i in range(b):
        ans *= a
        ans %= 10
    if ans == 0:
        ans = 10
    print(ans)

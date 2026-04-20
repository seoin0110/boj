a, b = input().split()

if len(a) != len(b):
    print(0)
else:
    ans = 0
    for i in range(len(a)):
        if a[i] == b[i]:
            if a[i] == '8':
                ans += 1
        else:
            break
    print(ans)

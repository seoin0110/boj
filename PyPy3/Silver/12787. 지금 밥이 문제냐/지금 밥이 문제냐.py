n = int(input())
for i in range(n):
    a,b = input().split()
    if a == '1':
        l = [int(j) for j in b.split('.')]
        ans = 0
        mul = 1
        for j in range(7,-1,-1):
            ans += l[j]*mul
            mul *=256
        print(ans)
    else:
        b = int(b)
        ans = ""
        for j in range(8):
            ans = str(b% 256) + ans
            b //= 256
            if j != 7:
                ans = '.' + ans
        print(ans)
p1 = list(map(int,input().split()))
p2 = list(map(int,input().split()))
p3 = list(map(int,input().split()))
ans = (p1[1] - p3[1]) * (p2[0] - p1[0]) + (p2[1] - p1[1]) * (p3[0] - p1[0])
if ans > 0:
    print(-1)
elif ans < 0:
    print(1)
else:
    print(0)

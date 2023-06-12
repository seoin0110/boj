import itertools
n, m = map(int,input().split())
arr = [[] for i in range(n)]
house = []
chicken = []
for i in range(n):
    arr[i].extend(map(int,input().split()))
    for j in range(n):
        if arr[i][j] == 1:
            house.append([i,j])
        elif arr[i][j] == 2:
            chicken.append([i,j])
ans = 1000000000
for c in itertools.combinations(chicken,m):
    distance_sum = 0
    for i in house:
        distance = 1000000000
        for j in c:
            distance = min(distance, abs(i[0] - j[0]) + abs(i[1] - j[1]))
        distance_sum += distance
    ans = min(ans, distance_sum)
print(ans)

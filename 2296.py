n = int(input())
l = []
for i in range(n):
    l.append(list(map(int,input().split())))
l.sort()
# dp[i] : i번째 건물을 포함했을 때 얻을 수 있는 최대 이익
dp_1 = [0 for i in range(n)]
dp_2 = [0 for i in range(n)]

for i in range(n):
    plus1 = 0
    plus2 = 0
    for j in range(0,i):
        if l[i][1] < l[j][1]:
            plus1 = max(plus1, dp_1[j])
        else:
            plus2 = max(plus2, dp_2[j])
    dp_1[i] = l[i][2] + plus1
    dp_2[i] = l[i][2] + plus2
    
print(max(max(dp_1), max(dp_2)))

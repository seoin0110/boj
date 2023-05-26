n = int(input())
sum_a = 0
sum_b = 0
l = []
ans = 0
for i in range(n):
   a,b = map(int, input().split())
   l.append([a,b])
   sum_a += a
   sum_b += b
   ans = max(ans, sum_b - (sum_a - a))
print(max(sum_b - (sum_a - l[-1][0]), ans))

n = int(input())
ans = 0
for i in range(3**(n-1), 3**(n)+1):
   tmp = i
   s = 0
   while tmp > 0:
      s += tmp%3
      tmp = tmp // 3
   if s != 0 and s % 3 == 0:
      ans += 1
print(ans)

n = int(input())
i = 2
n_ = n
cnt = 0
while i*i <= n_:
    while n % i == 0:
       cnt+=1
       n = n//i
    i+=1
if n != 1:
    cnt+=1
ans = 0
plus = 0
while cnt != 1:
    ans += 1
    if cnt%2 == 1:
        plus = 1
    cnt = cnt//2
print(ans + plus)

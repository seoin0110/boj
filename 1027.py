n = int(input())
arr = list(map(int, input().split()))
ans = 0
for i in range(n):
    j = i-1
    tmp = 0
    while j >=0:
        good = 1
        for k in range(j+1,i):
            if ((i - k) * arr[j] + (k - j) * arr[i])/(i-j) <= arr[k]:
                good = 0
                break
        if good == 1:
            tmp+=1
        j -= 1
    j = i + 1
    while j < n:
        good = 1
        for k in range(i+1,j):
            if ((j - k) * arr[i] + (k - i) * arr[j])/(j - i) <= arr[k]:
                good = 0
                break
        if good == 1:
            tmp+=1
        j += 1
    ans = max(ans, tmp)        
print(ans)

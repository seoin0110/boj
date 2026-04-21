a, b, c = map(int,input().split())
if a >= 1:
    arr = list(map(int,input().split()))
idx = 0
flag = 0
start_idx = -1
while idx<a and arr[idx] >= b:
    if arr[idx] == b and flag == 0:
        flag = 1
        start_idx = idx
    idx+=1

if idx >= c:
    print(-1)
elif start_idx >= 0:
    print(start_idx+1)
else:
    print(idx+1)
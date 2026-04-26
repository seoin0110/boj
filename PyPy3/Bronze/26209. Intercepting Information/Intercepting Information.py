arr = list(map(int, input().split()))
flag = 0
for i in arr:
    if i == 9:
        flag = 1
if flag == 1:
    print("F")
else:
    print("S")
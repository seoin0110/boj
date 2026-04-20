n = int(input())
arr = [1,1,2,4]
for i in range(4,68):
    arr.append(sum(arr[len(arr)-4:len(arr)]))
for i in range(n):
    k = int(input())
    print(arr[k])
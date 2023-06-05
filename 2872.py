n = int(input())
l = []
for i in range(n):
    l.append(int(input()))
find = n
for i in range(n-1,-1,-1):
    if l[i] == find:
        find-=1
print(find)

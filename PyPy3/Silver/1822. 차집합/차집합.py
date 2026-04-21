a,b = input().split()
aa = set(input().split())
bb = set(input().split())
cc = aa - bb
l = []
for i in cc:
    l.append(int(i))
l.sort()
print(len(l))
for i in l:
    print(i,end = " ")

def can_make(a, b):
    ret = False
    for bb in range(len(b)):
        if b[:bb] + b[bb+1:] == a:
            ret  = True
            break
    return ret

d, w = input().split()
d = int(d)
l = [[] for i in range(78)]
for i in range(d):
    s = input()
    if len(s) <= len(w):
        continue
    else:
        l[len(s) - len(w)].append(s)
l[0].append(w)
ans = w
for i in range(1,len(l)):
    if len(l[i-1]) == 0:
        break
    j = 0
    while j < len(l[i]):
        if_can_make = False
        for k in l[i-1]:
            if can_make(k, l[i][j]):
                if_can_make = True
                break
        if if_can_make == False:
            l[i].pop(j)
        else:
            ans = l[i][j]
            j += 1
print(ans)

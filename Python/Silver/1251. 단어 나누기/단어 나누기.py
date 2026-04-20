s = input()
l = []
for i in range(1,len(s)-1):
    for j in range(i+1, len(s)):
        tmp = "".join(reversed(s[:i]))+"".join(reversed(s[i:j]))+"".join(reversed(s[j:]))
        l.append(tmp)
l.sort()
print(l[0])

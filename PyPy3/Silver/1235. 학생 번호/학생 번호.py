n = int(input())
s = []
for i in range(n):
    tmp = input()
    s.append(tmp)
s_len = len(s[0])
ans = s_len
for i in range(1,s_len):
    st = set()
    for j in range(n):
        st = st | set([s[j][s_len - i:]])
    if len(st) == n:
        ans = i
        break
print(ans)


g,s = map(int,input().split())
W = input()
S = input()
alp_w = dict()
alp_s = dict()
ans = 0
for i in range(g):
    if alp_w.get(W[i]):
        alp_w[W[i]]+=1
    else:
        alp_w[W[i]] = 1
    if alp_s.get(S[i]):
        alp_s[S[i]]+=1
    else:
        alp_s[S[i]] = 1
if alp_w == alp_s:
    ans += 1
for i in range(g,s):
    if alp_s.get(S[i]):
        alp_s[S[i]] += 1
    else:
        alp_s[S[i]] = 1
    if alp_s[S[i-g]] == 1:
        del alp_s[S[i-g]]
    else:
        alp_s[S[i-g]] -= 1
    if alp_s == alp_w:
        ans += 1
print(ans)

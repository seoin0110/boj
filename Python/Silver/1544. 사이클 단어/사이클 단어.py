n = int(input())
st = set()
for i in range(n):
    s = input()
    flag = 0
    for j in range(len(s)):
        if not set([s[j:]+s[:j]]).isdisjoint(st):
            flag = 1
            break
    if flag == 0:
        st = st.union(set([s]))
print(len(st))
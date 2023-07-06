n = int(input())
s1 = input()
s2 = input()

ans = 10000000

tmp = 0
tmp_s = list(s1)
flag = 0
for i in range(1,n-1):
    if tmp_s[i-1] == s2[i-1]:
        continue
    else:
        tmp += 1
        tmp_s[i-1] = s2[i-1]
        if tmp_s[i] == '0':
            tmp_s[i] = '1'
        else:
            tmp_s[i] = '0'
        if tmp_s[i+1] == '0':
            tmp_s[i+1] = '1'
        else:
            tmp_s[i+1] = '0'
            
if tmp_s[n-1] == s2[n-1] and tmp_s[n-2] == s2[n-2]:
    flag = 1
elif tmp_s[n-1] != s2[n-1] and tmp_s[n-2] != s2[n-2]:
    flag = 1
    tmp += 1

if flag == 1:
    ans = min(ans, tmp)

tmp = 1
tmp_s = list(s1)
flag = 0

if tmp_s[0] == '0':
    tmp_s[0] = '1'
else:
    tmp_s[0] = '0'
if tmp_s[1] == '0':
    tmp_s[1] = '1'
else:
    tmp_s[1] = '0'
for i in range(1,n-1):
    if tmp_s[i-1] == s2[i-1]:
        continue
    else:
        tmp += 1
        tmp_s[i-1] = s2[i-1]
        if tmp_s[i] == '0':
            tmp_s[i] = '1'
        else:
            tmp_s[i] = '0'
        if tmp_s[i+1] == '0':
            tmp_s[i+1] = '1'
        else:
            tmp_s[i+1] = '0'
            
if tmp_s[n-1] == s2[n-1] and tmp_s[n-2] == s2[n-2]:
    flag = 1
elif tmp_s[n-1] != s2[n-1] and tmp_s[n-2] != s2[n-2]:
    flag = 1
    tmp += 1
if flag == 1:
    ans = min(ans, tmp)

if ans == 10000000:
    print(-1)
else:
    print(ans)

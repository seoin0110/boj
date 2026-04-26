a, b = input().split()
a_i = len(a) - 1
b_i = len(b) - 1
c = 0
ans = ""
while a_i >= 0 and b_i >= 0:
    a_now = 0
    b_now = 0
    if a[a_i] == '1':
        a_now = 1
    if b[b_i] == '1':
        b_now = 1
    if (c + a_now + b_now) % 2 == 1:
        ans = '1' + ans
    else:
        ans = '0' + ans
    if c + a_now + b_now >= 2:
        c = 1
    else:
        c = 0
    a_i -= 1
    b_i -= 1

while a_i >= 0:
    a_now = 0
    if a[a_i] == '1':
        a_now = 1
    if ( c + a_now) % 2 == 1:
        ans = '1' + ans
    else:
        ans = '0' + ans
    if c + a_now >= 2:
        c = 1
    else:
        c = 0
    a_i -= 1

while b_i >= 0:
    b_now = 0
    if b[b_i] == '1':
        b_now = 1
    if (c +b_now) % 2 == 1:
        ans = '1' + ans
    else:
        ans = '0' + ans
    if c + b_now >= 2:
        c = 1
    else:
        c = 0
    b_i -= 1

if c == 1:
    ans = '1' + ans

idx = -1
for i in range(len(ans)):
    if ans[i] == '0':
        idx = i
    else:
        break
if len(ans) == idx+1:
    idx -= 1
if idx >= 0:
    print(ans[idx+1:])
else:
    print(ans)

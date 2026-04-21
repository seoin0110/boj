from collections import deque
s = input()
dq = deque()
tag_flag = 0
ans = ''
for i in s:
    if tag_flag == 1:
        if i == '>':
            tag_flag = 0
        ans += i
    elif i == '<':
        while dq:
            ans += dq.pop()
        ans += i
        tag_flag = 1
    elif i == ' ':
        while dq:
            ans += dq.pop()
        ans += i
    else:
        dq.append(i)
while dq:
    ans += dq.pop()
print(ans)
        
        

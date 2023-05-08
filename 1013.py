import re

n = int(input())
for i in range(n):
    s = input()
    ans = 0
    if re.compile('((100+1+)|(01))+').fullmatch(s):
        ans = 1
    if ans:
        print("YES")
    else:
        print("NO")

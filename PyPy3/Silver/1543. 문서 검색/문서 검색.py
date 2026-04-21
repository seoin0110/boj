a = input()
b = input()
ans = 0
i = 0
while True:
  if i >= len(a)-len(b)+1:
    break
  if a[i:i+len(b)] == b:
    ans+=1
    i+=len(b)
  else:
    i+=1
print(ans)

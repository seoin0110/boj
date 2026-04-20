n = int(input())
arr = []
for i in range(n):
  a, b = input().split()
  if a.isdigit():
    a = int(a)
  else:
    a, b = b, a
    a = int(a)
    a *= 2
  arr.append([a,b])
arr.sort()
for i in arr:
  print(i[1])

from functools import cmp_to_key
d = dict()
d['S'] = 1
d['M'] = 2
d['L'] = 3
def cmp(x,y):
  if d[x[0]] > d[y[0]]:
    return 1
  elif d[x[0]] < d[y[0]]:
    return -1
  elif ord(x[1]) > ord(y[1]):
    return 1
  else:
    return -1
while True:
    n = int(input())
    if n == 0:
        break
    arr = []
    for i in range(n):
       arr.append(input())
    m = int(input())
    for i in range(m):
        arr.append(input())
    sorted_arr = sorted(arr, key=cmp_to_key(cmp))
    for i in sorted_arr:
        print(i, end=' ')
    print()

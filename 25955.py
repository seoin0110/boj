from functools import cmp_to_key
d = dict()
d['B'] = 1
d['S'] = 2
d['G'] = 3
d['P'] = 4
d['D'] = 5
def cmp(x,y):
  if d[x[0]] > d[y[0]]:
    return 1
  elif d[x[0]] < d[y[0]]:
    return -1
  elif int(x[1:]) < int(y[1:]):
    return 1
  else:
    return -1

n = int(input())
arr = input().split()
sorted_arr = sorted(arr, key=cmp_to_key(cmp))
if sorted_arr == arr:
  print("OK")
else:
  print("KO")
  for i in range(n):
    if sorted_arr[i] != arr[i]:
      print(sorted_arr[i], end=' ')

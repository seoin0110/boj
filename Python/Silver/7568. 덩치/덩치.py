n = int(input())

data  =[]
result = []
for i in range(n):
  x, y = map(int, input().split())
  data.append((x, y))

for i in range(n):
  num = 1
  for j in range(n):
    if data[i][0] < data[j][0] and data[i][1] < data[j][1]:
      num += 1

  result.append(num)

for i in result:
  print(i , end = " ")
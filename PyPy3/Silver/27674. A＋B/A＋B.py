n = int(input())
for i in range(n):
  input()
  s = list(input())
  s.sort(reverse=True)
  tmp = ''
  for i in s:
    tmp = tmp + i
  s = tmp
  print(int(s[:len(s)-1])+int(s[len(s)-1]))

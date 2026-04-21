word = str(input())

def if_palindrom(ss):
  flag = True
  for i in range(len(ss)):
    if ss[i]!=ss[len(ss)-i-1]:
      flag = False
  return flag

def palindrom_bf(word):
  s = len(word)
  ans = s*2-1
  for i in range(s):
    if if_palindrom(word[i:s]):
      ans = s-i+ i*2
      word += word[i-1::-1]
      break
  return ans, word
palindrom_length, palindrom = palindrom_bf(word)
print(palindrom_length)
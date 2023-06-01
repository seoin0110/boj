t = int(input())
for i in range(t):
   s = input()
   flag = 1
   m = '0'
   for i in range(len(s)-1,-1,-1):
      if s[i] >= m:
         m = s[i]
      else:
         flag = 0
         s_left = s[:i]
         s_right = list(s[i+1:])
         next_bigger = 0
         for j in range(0, len(s_right)):
            if s[i] < s_right[j]:
               next_bigger = j
         s_right[next_bigger], s_i = s[i], s_right[next_bigger]
         s_right.sort()
         s_right = "".join(i for i in s_right)
         print(s_left+ s_i + s_right)
         break
   if flag == 1:
      print("BIGGEST")

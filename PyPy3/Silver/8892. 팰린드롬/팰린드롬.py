def reverse(word):
     reverse_word = ''
     for c in word:
         reverse_word = c + reverse_word
     return reverse_word
def ispal(word):
     if word==reverse(word):
         return True
     else:
         return False
N=int(input())
find=0
answer=[]
for n in range(N):
     m=int(input())
     arr=[]
     for i in range(m):
         arr.append(input())
 
     for i, word1 in enumerate(arr):
         for j, word2 in enumerate(arr):
             if i!=j:
                 if ispal(word1+word2):
                     answer.append(word1+word2)
                     find=1
                     break
                 if ispal(word2+word1):
                     answer.append(word2+word1)
                     find=1
                     break
         if find==1:
             break
     if find==0:
         answer.append('0')
     find=0
 
 
for ans in answer:
     print(ans)

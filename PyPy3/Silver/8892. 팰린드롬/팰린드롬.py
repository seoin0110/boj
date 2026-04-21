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
         reverse_word=reverse(word1)
         for j, word2 in enumerate(arr):
             if i!=j:
                 if reverse_word==word2[:len(word1)]:
                     remainder=word2[len(word1):]
                     if ispal(remainder):
                         answer.append(word2+word1)
                         find=1
                         break
                 if reverse_word==word2[-1 * len(word1):]:
                     remainder = word2[:-1 * len(word1)]
                     if ispal(remainder):
                         answer.append(word1+word2)
                         find=1
                         break
         if find==1:
             break
     if find==0:
         answer.append('0')
     find=0
 
 
for ans in answer:
     print(ans)

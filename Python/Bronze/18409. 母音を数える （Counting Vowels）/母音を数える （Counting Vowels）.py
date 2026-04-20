n = int(input())
s = input()
vowel = ['i','e','a','o','u']
cnt = 0
for i in range(n):
    if s[i] in vowel:
        cnt+=1
print(cnt)
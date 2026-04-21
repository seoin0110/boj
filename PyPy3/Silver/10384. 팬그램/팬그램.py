ans = ['Not a pangram', 'Pangram!', 'Double pangram!!', 'Triple pangram!!!']
for i in range(int(input())):
    s = input()
    alp = [0 for j in range(26)]
    for j in s:
        if 0 <= ord(j)-ord('a') < 26:
            alp[ord(j)-ord('a')] += 1
        elif 0 <= ord(j)-ord('A') < 26:
            alp[ord(j)-ord('A')] += 1
    print(f'Case {i+1}: {ans[min(alp)]}')
    

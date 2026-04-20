mim=['Never gonna give you up','Never gonna let you down','Never gonna run around and desert you','Never gonna make you cry','Never gonna say goodbye','Never gonna tell a lie and hurt you','Never gonna stop']
flag=0
for i in range(int(input())):
    if input() not in mim:
        flag=1
if flag==1:
    print("Yes")
else:
    print("No")

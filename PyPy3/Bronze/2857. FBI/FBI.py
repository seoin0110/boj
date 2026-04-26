cnt = 0
for i in range(5):
    s = input()
    if "FBI" in s:
        print(i+1, end=" ")
        cnt+=1
if cnt == 0:
    print("HE GOT AWAY!")

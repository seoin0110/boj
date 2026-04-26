a =int(input())
for i in range(a):
    s =""
    if i > 0:
        s += " "*i
    s +="*" * (a-i)
    print(s)
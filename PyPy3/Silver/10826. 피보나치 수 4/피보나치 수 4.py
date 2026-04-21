n = int(input())
start = 0
end = 1



if n == 0:
    print(0)
elif n==1:
    print(1)
else:
    for i in range(n-1):
        start, end = end, start+end
    print(end)
    
    

n = int(input())
arr = ["" for i in range(1, 16)]
for i in range(1, 16):
  arr[i-1] += "딸기" if (i // 8) %2 else "V"
  arr[i-1] += "딸기" if (i // 4) %2 else "V"
  arr[i-1] += "딸기" if (i // 2) %2 else "V"
  arr[i-1] += "딸기" if i%2 else "V"

for i in range(13, 0, -1):
  arr.append(arr[i])
for i in range(n):
  a = int(input())
  print(arr[(a-1) % len(arr)])
  

n = int(input()) - 1
arr = [[0,1], [1,1]]
ans_arr = [[1,0], [0,1]]
while n > 0:
    if n % 2 != 0:
        tmp_arr = [[0,0],[0,0]]
        for i in range(2):
            for j in range(2):
                for k in range(2):
                    tmp_arr[i][j] += ans_arr[i][k] * arr[k][j]
                tmp_arr[i][j] = tmp_arr[i][j] % 1000000007
        ans_arr = tmp_arr
    tmp_arr = [[0,0],[0,0]]
    for i in range(2):
        for j in range(2):
            for k in range(2):
                tmp_arr[i][j] += arr[i][k] * arr[k][j]
            tmp_arr[i][j] = tmp_arr[i][j] % 1000000007
    arr = tmp_arr
    n = n // 2

print(ans_arr[1][1]%1000000007)

n = int(input())
list = [[False] * 100 for _ in range(100)]
ret = 0

for _ in range(n):
    x, y = map(int, input().split())

    for i in range(x, x + 10):
        for j in range(y, y + 10):
            if list[i][j] == False :
                list[i][j] = True
                ret += 1

print(ret)
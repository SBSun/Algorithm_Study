a = [list(map(int, input().split())) for _ in range(9)]

x = 0
y = 0
max = -1

for i in range(9):
    for j in range(9):
        if a[i][j] >= max:
            y = i + 1
            x = j + 1
            max = a[i][j]

print(max)
print(y, x)
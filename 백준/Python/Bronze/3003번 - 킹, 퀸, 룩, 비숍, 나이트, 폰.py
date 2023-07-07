chess = [1, 1, 2, 2, 2, 8]
a = list(map(int, input().split()))

for i in range(len(6)):
    print(chess[i] - a[i], end = ' ')
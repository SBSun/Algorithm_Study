a, b, c, d, e, f = map(int, input().split())

isBreak = False

for x in range(-999, 1000):
    for y in range(-999, 1000):
        if (a * x + b * y == c) and (d * x + e * y == f):
            isBreak = True
            print(x, y)
            break
    if isBreak:
        break
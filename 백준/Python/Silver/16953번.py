a, b = map(int, input().split())
res = 1

while True:
    if a > b:
        print(-1)
        break
    elif a == b:
        print(res)
        break

    if b % 10 == 1:
        b //= 10
    elif b % 2 == 0:
        b //= 2
    else:
        print(-1)
        break
    
    res += 1
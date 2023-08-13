t = int(input())

if t % 10 != 0:
    print(-1)
else:
    a = int(t / 300)
    b = int((t % 300) / 60)
    c = int((t % 300) % 60 / 10)
    print(a, b, c)
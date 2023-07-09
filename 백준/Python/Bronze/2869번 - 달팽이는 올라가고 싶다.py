A, B, V = map(int, input().split())

# (올라가는 높이 - 미끄러지는 높이)
day = (V - B) / (A - B)

if day == int(day):
    print(int(day))
else:
    print(int(day) + 1)
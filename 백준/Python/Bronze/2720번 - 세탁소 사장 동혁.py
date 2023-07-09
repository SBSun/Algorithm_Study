units = [25, 10, 5, 1]
t = int(input())

for _ in range(t):
    money = int(input())
    
    for i in units:
        print(money // i, end=' ')
        money %= i

    print()

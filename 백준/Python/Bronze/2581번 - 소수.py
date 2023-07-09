M = int(input())
N = int(input())

sum = 0
min = 10001

for i in range(M, N + 1):

    if i == 1:
        continue
    
    isPrime = True
    for j in range(2, i // 2 + 1):
        if i % j == 0:
            isPrime = False
            break

    if isPrime:
        sum += i
        if min > i:
            min = i

if sum != 0:
    print(sum)
    print(min)
else:
    print(-1)
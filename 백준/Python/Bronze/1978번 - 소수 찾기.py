N = int(input())
num_list = list(map(int, input().split()))
cnt = 0

for i in range(N):
    
    if num_list[i] == 1:
        continue

    isPrime = True
    for j in range(2, num_list[i] // 2 + 1):
        if num_list[i] % j != 0:
            continue
        else:
            isPrime = False
            break

    if isPrime:
        cnt += 1

print(cnt)
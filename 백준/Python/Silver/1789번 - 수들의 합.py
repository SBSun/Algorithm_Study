n = int(input())

cnt = 1
sum = 0

while True:
    sum += cnt

    if sum > n:
        cnt -= 1
        break

    cnt += 1

print(cnt)
N = int(input())

cnt = 1
num = 1

while num < N:
    num += cnt * 6
    cnt += 1

print(cnt)

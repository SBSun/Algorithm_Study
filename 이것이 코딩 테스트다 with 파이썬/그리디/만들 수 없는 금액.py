import sys

n = int(input())
data = list(map(int, input().split()))
data.sort()

target = 1

for i in data:
    # 만들 수 없는 금액이라면
    if target < i:
        break

    target += i

print(target)
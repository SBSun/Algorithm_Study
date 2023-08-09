import sys

n = int(sys.stdin.readline())
arr = list(map(int, sys.stdin.readline().split()))
arr.sort()

cnt = 0
res = 0

for i in arr:
    cnt += 1
    if cnt >= i:
        res += 1
        cnt = 0

print(res)
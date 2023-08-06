import sys

n, k = map(int, sys.stdin.readline().split())
coin_types = [int(sys.stdin.readline()) for _ in range(n)]
cnt = 0
for i in reversed(coin_types):
    cnt += k // i
    k %= i

print(cnt)
import sys

n, m= map(int, sys.stdin.readline().split())

res = 0
for _ in range(n):
    nums = list(map(int, sys.stdin.readline().split()))
    min_value = min(nums)
    res = max(res, min_value)

print(res)
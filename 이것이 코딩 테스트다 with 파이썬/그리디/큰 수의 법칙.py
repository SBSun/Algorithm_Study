import sys

n, m, k = map(int, sys.stdin.readline().split())
nums = list(map(int, sys.stdin.readline().split()))
nums.sort(reverse=True)

first = nums[0]
second = nums[1]

cnt = m // (k + 1) * k
cnt += m % (k + 1)

res = first * cnt
res += second * (m - cnt)

print(res)
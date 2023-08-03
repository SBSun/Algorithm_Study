import sys

n = int(sys.stdin.readline())

arrays = []

for i in range(n):
    nums = list(map(int, sys.stdin.readline().split()))
    arrays.append(nums)

arrays.sort()

for i in range(n):
    print(arrays[i][0], arrays[i][1])
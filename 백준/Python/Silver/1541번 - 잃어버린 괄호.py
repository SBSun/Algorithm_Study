import sys

minus_split = sys.stdin.readline().strip().split('-')
nums = []

for i in minus_split:
    sum = 0
    plus_split = i.split('+')

    for j in plus_split:
        sum += int(j)
        
    nums.append(sum)

res = nums[0]

for i in range(1, len(nums)):
    res -= nums[i]

print(res)
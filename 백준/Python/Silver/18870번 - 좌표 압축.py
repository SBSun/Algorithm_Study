import sys

n = int(sys.stdin.readline())
nums = list(map(int, sys.stdin.readline().strip().split()))

# 오름차순 정렬 및 중복 제거    
nums_sorted = list(sorted(set(nums)))

# 입력한 값들을 키로 설정, 미리 오름차순으로 정렬해 놓았기 때문에 0 ~ len(nums_sorted) index를 값으로 설정
dic = {nums_sorted[i] : i for i in range(len(nums_sorted))}

for i in nums:
    print(dic[i], end = ' ')

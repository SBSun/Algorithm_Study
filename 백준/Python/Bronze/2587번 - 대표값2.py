import sys

size = 5
arrays = [int(sys.stdin.readline()) for _ in range(size)]
avg = sum(arrays) // size

# 선택 정렬
for i in range(size - 1):
    min = i
    for j in range(i + 1, size):
        # i 번째 수가 더 크다면 스위칭
        if arrays[min] > arrays[j]:
            min = j
    arrays[i], arrays[min] = arrays[min], arrays[i]

print(avg)
print(arrays[size // 2])
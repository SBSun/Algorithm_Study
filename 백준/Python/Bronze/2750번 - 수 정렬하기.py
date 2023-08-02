import sys

n = int(sys.stdin.readline())
arrays = [int(sys.stdin.readline()) for _ in range(n)]

# 버블 정렬
for i in range(n - 1):
    for j in range(i + 1, n):
        # i 번째 수가 더 크다면 스위칭
        if arrays[i] > arrays[j]:
            arrays[i], arrays[j] = arrays[j], arrays[i]

for i in arrays:
    print(i)
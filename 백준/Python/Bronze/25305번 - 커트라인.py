import sys

n, k = map(int, sys.stdin.readline().split())
arrays = list(map(int, sys.stdin.readline().split()))

# 버블정렬
for i in range(k):
    for j in range(i + 1, n):
        # 내림차순
        if arrays[i] < arrays[j]:
            arrays[i], arrays[j] = arrays[j], arrays[i]

print(arrays[k - 1])

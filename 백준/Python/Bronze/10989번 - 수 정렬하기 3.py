import sys

size = 10001
n = int(sys.stdin.readline())
arrays = [0 for _ in range(size)]

# 카운팅 정렬
for _ in range(n):
    num = int(sys.stdin.readline())
    arrays[num] += 1

for i in range(1, size):
    if arrays[i] > 0:
        for j in range(arrays[i]):
            print(i)
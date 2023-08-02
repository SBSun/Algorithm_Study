import sys
import math

size = 123456 * 2
arrays = [i for i in range(size + 1)]

for i in range(2, int(math.sqrt(size)) + 1):
    if arrays[i]:
        for j in range(i*i, size + 1, i):
            arrays[j] = 0

while True:
    n = int(sys.stdin.readline())

    if not n :
        break

    cnt = 0
    for i in range(n + 1, 2 * n + 1):
        if arrays[i]:
            cnt += 1
    
    print(cnt)
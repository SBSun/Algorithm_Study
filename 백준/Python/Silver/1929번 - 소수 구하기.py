import sys
import math

m, n = map(int, sys.stdin.readline().split())
arrays = [True for _ in range(n + 1)]
arrays[1] = False

for i in range(2, int(math.sqrt(n)) + 1):
    if arrays[i] == True:
        for j in range(i * i, n + 1, i):
            arrays[j] = False

for i in range(m, n + 1):
    if arrays[i]:
        print(i)
import sys

n = int(sys.stdin.readline())

arrays = []

for i in range(n):
    s = sys.stdin.readline().strip()
    arrays.append(s)

arrays = list(set(arrays))
arrays.sort(key = lambda x:(len(x), x))

for i in arrays:
    print(i)
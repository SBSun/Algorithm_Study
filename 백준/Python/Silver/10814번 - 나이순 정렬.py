import sys

n = int(sys.stdin.readline())

arrays = []

for i in range(n):
    age, name = sys.stdin.readline().strip().split()
    arrays.append([int(age), name])

arrays.sort(key = lambda x : x[0])

for i in arrays:
    print(i[0], i[1])
import sys

n = int(sys.stdin.readline())
times = list(map(int, sys.stdin.readline().split()))
times.sort()

sum = 0
res = 0

for i in times:
    # 각 시간의 합
    sum += i
    # 각 사람이 돈을 인출하는데 걸리는 시간의 합
    res += sum

print(res)
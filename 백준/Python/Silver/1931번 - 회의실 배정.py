import sys

n = int(sys.stdin.readline())
times = [list(map(int, sys.stdin.readline().strip().split())) for _ in range(n)]
times.sort(key = lambda x : (x[1], x[0]))

end = times[0][1]
cnt = 1

for i in range(1, len(times)):
    if end <= times[i][0]:
        cnt += 1
        end = times[i][1]

print(cnt)
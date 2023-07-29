import sys
from collections import deque

n, m = map(int, input().split())
index = list(map(int, input().split()))
q = deque([i for i in range(1, n + 1)])
cnt = 0

# index의 요소들을 전부 뽑아낼 때까지 반복
for i in index:
    while True:
        # 뽑으려는 수의 위치가 index와 같다면
        if q[0] == i:
            q.popleft()
            break
        else:
            # 뽑으려는 수의 위치가 q의 길이를 반으로 나눈것보다 작으면 왼쪽으로 이동
            if q.index(i) < len(q) / 2:
                q.append(q.popleft())
                cnt += 1
            else:
                q.appendleft(q.pop())
                cnt += 1

print(cnt)

from collections import deque
import sys

n, k = map(int, input().split())
q = [i for i in range(1, n+1)]
res = []
idx = 0

while q:
    idx += k - 1
    if idx >= len(q) : # 인덱스가 범위를 넘어갈 경우
        idx %= len(q)

    res.append(str(q.pop(idx)))
    
print('<', ', '.join(res), '>', sep='') 
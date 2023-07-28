from collections import deque
import sys

n = int(input())
q = deque([i for i in range(1, n+1)])

while len(q) > 1:

    q.popleft()
    q.rotate(-1)
    
print(q[0])
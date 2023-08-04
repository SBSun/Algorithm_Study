import sys
from collections import defaultdict 

n, m = map(int, sys.stdin.readline().strip().split())
words = defaultdict(int)
cnt = {i : [] for i in range(1, 100001)}

# 입력한 단어의 빈도수 체크
for _ in range(n):
    word = sys.stdin.readline().strip()
    if len(word) < m:
        continue
    else:
        words[word] += 1

# 빈도수가 키인 cnt 딕셔너리에 단어를 추가 
for i in words:
    cnt[words[i]].append(i)

# 길이는 내림차순, 사전은 오름차순
for i in range(n, 0, -1):
    if cnt[i]:
        cnt[i].sort(key = lambda x : (-len(x), x))
        print(*cnt[i])
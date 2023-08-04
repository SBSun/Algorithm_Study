import sys

n = int(sys.stdin.readline())
cnt = 0
chat_list = []
for _ in range(n):
    s = sys.stdin.readline().strip()
    if s == 'ENTER':
        cnt += len(list(set(chat_list)))
        chat_list = []
        continue

    chat_list.append(s)

cnt += len(list(set(chat_list)))

print(cnt)
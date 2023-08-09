import sys

s = sys.stdin.readline().strip()
cnt0 = 0
cnt1 = 0

if s[0] == '1':
    cnt0 += 1
else:
    cnt1 += 1

for i in range(1, len(s) - 1):
    # 현재 문자와 다음 문자가 같지 않다면
    if s[i] != s[i + 1]:
        if s[i + 1] == '1':
            cnt0 += 1
        else:
            cnt1 += 1

print(min(cnt0, cnt1))



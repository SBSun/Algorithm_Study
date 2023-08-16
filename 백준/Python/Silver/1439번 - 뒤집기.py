import sys

s = sys.stdin.readline()

cnt0 = 0
cnt1 = 0

if s[0] == '0':
    cnt1 = 1
else:
    cnt0 = 1

for i in range(1, len(s)):
    # 현재 문자와 다음 문자가 다르다면
    if s[i] != s[i + 1]:

        if s[i] == '0':
            cnt0 += 1
        else:
            cnt1 += 1

print(min(cnt0, cnt1))
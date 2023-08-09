import sys

s = sys.stdin.readline().strip()
res = int(s[0])

# 0 또는 1이 아니면 곱하기
for i in range(1, len(s)):
    num = int(s[i])

    if num <= 1 or res <= 1:
        res += num
    else:
        res *= num

print(res)
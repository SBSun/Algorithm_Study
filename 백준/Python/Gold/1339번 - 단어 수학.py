import sys

n = int(input())
arr = [0 for _ in range(26)]

for _ in range(n):
    s = sys.stdin.readline().strip()
    pow = 1

    # 입력한 문자열의 각 알파벳마다 순서대로 자릿수 지정
    for i in reversed(s):
        arr[ord(i) - ord('A')] += pow
        pow *= 10
    
# 내림차순 정렬
arr.sort(reverse=True)

num = 9
res = 0

for i in range(26):
    if arr[i] == 0:
        continue

    res += num * arr[i]
    num -= 1

print(res)


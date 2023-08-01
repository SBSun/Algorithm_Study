import sys
import math

def gcd_func(a, b):
    while b > 0:
        a, b = b, a % b
    return a

n = int(sys.stdin.readline())
trees = [int(sys.stdin.readline()) for _ in range(n)]

gaps = []
for i in range(1, n):
    gaps.append(trees[i] - trees[i - 1])

gaps = list(set(gaps))

g = gaps[0]
for i in range(1, len(gaps)): # 간격들의 최대공약수
    g = math.gcd(g, gaps[i])

cnt = 0
for gap in gaps: # 간격을 최대공약수로 나누고 1을 빼주면 심을 나무 숫자
    cnt += gap // g - 1

print(cnt)
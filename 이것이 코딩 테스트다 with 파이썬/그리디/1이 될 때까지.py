import sys

n, k = map(int, sys.stdin.readline().split())
res = 0

while True:
    # n을 k로 나눈 몫에 k를 곱한다. 
    target = (n // k) * k
    # 현재 n을 k로 나눴을 때, 딱 떨어지는 값을 만들기위해 1을 빼야하는 횟수를 구하여 결과에 추가한다.
    res += (n - target)
    n = target

    # 더 이상 나눌 수 없을 때 탈출
    if n < k:
        break

    res += 1
    n //= k

res += (n - 1)
print(res)
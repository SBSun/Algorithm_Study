import sys

while True:
    i = 1
    l, p, v = map(int, sys.stdin.readline().strip().split())

    if l == 0 and p == 0 and v == 0:
        break

    res = v // p * l
    res += min((v % p), l)

    print('Case ' + str(i) + ':', res)
    i += 1
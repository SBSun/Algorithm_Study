def gcd(a, b):
    while b > 0:
        a, b = b, a % b
    return a

def lcm(a, b):
    return a * b // gcd(a, b)

t = int(input())

for _ in range(t):
    a, b = map(int, input().split())
    if b > a:
        a, b = b, a
    print(lcm(a, b))
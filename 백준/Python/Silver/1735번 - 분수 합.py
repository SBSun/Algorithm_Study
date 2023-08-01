def gcd(a, b):
    while a % b != 0:
        a, b = b, a % b
    return b

a1, b1 = map(int, input().split())
a2, b2 = map(int, input().split()) 

top = a1 * b2 + a2 * b1
bottom = b1 * b2
gcd = gcd(top, bottom)

print(top // gcd, bottom // gcd)
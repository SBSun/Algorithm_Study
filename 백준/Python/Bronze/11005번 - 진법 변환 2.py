N, B = map(int, input().split())
list = '0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ'
ret = ''

while N:
    ret += str(list[N % B])
    N //= B

print(ret[::-1])
N, B = input().split()
list = '0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ'

N = N[::-1]
ret = 0

for i in range(len(N)):
    ret += list.find(N[i]) * (int(B) ** i)

print(ret)

'''
다른 풀이

N, B = input().split()
print(int(N, int(B)))
'''
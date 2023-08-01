import sys
import math

def isPrime(num):
    if num == 0 or num == 1:
        return False
    
    for i in range(2, int(math.sqrt(num)) + 1):
        if num % i == 0:
            return False
        
    return True

t = int(sys.stdin.readline())

for _ in range(t):
    n = int(sys.stdin.readline())

    while True:
        if isPrime(n):
            print(n)
            break
        else:
            n = n + 1
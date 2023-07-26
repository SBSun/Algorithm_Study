n = int(input())

i = 666

while True:
    if '666' in str(i):
        n -= 1
    
    if n == 0:
        print(i)
        break

    i += 1
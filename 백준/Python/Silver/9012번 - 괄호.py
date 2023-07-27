import sys

t = int(sys.stdin.readline())

for _ in range(t):
    str = sys.stdin.readline()
    stack = []

    for i in str:
        if i == '(':
            stack.append(i)
        elif i == ')':
            if stack:
                stack.pop()
            else:
                print('NO')
                break 
    else:
        if not stack:
            print('YES')
        else:
            print('NO')
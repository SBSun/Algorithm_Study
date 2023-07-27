import sys

while True:
    str = sys.stdin.readline()
    if str == ".":
        break

    stack = []

    for i in str:
        if i == '(' or i == '[':
            stack.append(i)
        elif i == ')': 
            if len(stack) != 0 and stack[-1] == '(':
                stack.pop()
            else:
                stack.append(i)
                break 
        elif i == ']':
            if len(stack) != 0 and stack[-1] == '[':
                stack.pop()
            else:
                stack.append(i)
                break 

    if not stack:
        print('yes')
    else:
        print('no')
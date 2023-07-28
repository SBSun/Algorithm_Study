n = int(input())

stack = []
oper = []
count = 1
flag = True

for _ in range(n):
    num = int(input())
    while num >= count:
        stack.append(count)
        oper.append('+')
        count += 1
    
    # 스택의 top과 num이 같으면 제거
    if stack[-1] == num:
        stack.pop()
        oper.append('-')
    # 수열을 만들 수 없다.
    else:
        flag = False
        break

if flag:
    for i in oper:
        print(i)
else:
    print('NO')


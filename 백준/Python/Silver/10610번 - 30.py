n = list(input())
n.sort(reverse=True)

# 30의 배수는 항상 끝자리가 0으로 끝나기 때문에 0이 아니면 X
if n[-1] != '0':
    print(-1)
else:
    sum = 0
    for i in n:
        sum += int(i)
    
    # 각 자리의 총합이 3으로 나누어 떨어져야지 30의 배수가 된다.
    if sum % 3 != 0:
        print(-1)
    else:
        print("".join(n))
while True:
    n = int(input())

    if n == -1:
        break

    list = []
    sum = 0
    for i in range(1, n // 2 + 1):
        if n % i == 0:
            list.append(str(i))
            sum += i

    if n == sum:
        print(n, '=', ' + '.join(list))
    else:
        print(n, "is NOT perfect.")
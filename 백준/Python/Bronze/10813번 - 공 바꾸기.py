n, m = map(int, input().split())
n_list = [i for i in range(1, n + 1)]

for _ in range(m):
    i, j = map(int, input().split())
    i -= 1
    j -= 1
    temp = n_list[i]
    n_list[i] = n_list[j]
    n_list[j] = temp

for i in range(n):
    print(n_list[i], end= " ")
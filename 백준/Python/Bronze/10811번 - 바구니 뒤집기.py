n, m = map(int, input().split())
n_list = list(i for i in range(1, n + 1))

for _ in range(m):
    i, j = map(int, input().split())
    temp = n_list[i-1:j]
    temp.reverse()
    n_list[i-1:j] = temp

for i in range(n):
    print(n_list[i], end=" ")
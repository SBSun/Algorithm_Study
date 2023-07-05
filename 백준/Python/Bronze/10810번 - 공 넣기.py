n, m = map(int, input().split())
n_list = [0 for i in range(n)]

for _ in range(m):
    i, j, k = map(int, input().split())
    for z in range(i, j+1):
        n_list[z-1] = k

for z in range(n):
    print(n_list[z], end=" ")
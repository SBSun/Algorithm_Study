N, M = map(int, input().split())
list = list(map(int, input().split()))
sum_list = []

for i in range(N):
    for j in range(i + 1, N):
        for z in range(j + 1, N):
            sum = list[i] + list[j] + list[z]
            if sum > M:
                continue
            else:
                sum_list.append(sum)

print(max(sum_list))
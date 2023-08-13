n = int(input())
weights = []
for _ in range(n):
    weights.append(int(input()))

weights.sort(reverse=True)

res = []

for i in range(n):
    res.append(weights[i] * (i + 1))

print(max(res))
list = []

for _ in range(10):
    n = int(input()) % 42
    if n not in list:
        list.append(n)

print(len(list))
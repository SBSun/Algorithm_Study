a_list = list(input() for _ in range(5))
result = ""
max_len = len(max(a_list, key=len))

for i in range(0, max_len):
    for j in range(5):
        if len(a_list[j]) >= i + 1:
            result += a_list[j][i]

print(result)
import sys

n = int(sys.stdin.readline())
arr = []

for _ in range(n):
    arr.append(int(sys.stdin.readline().rstrip()))

# 중앙값을 구하기 위해 정렬
arr.sort()

print(round(sum(arr)/n))
print(arr[n//2])

dic = dict()
# 빈도수 구하기
for i in arr: 
    if i in dic:
        dic[i] += 1
    else:
        dic[i] = 1

mx = max(dic.values())
mx_list = []

for i in dic:
    if mx == dic[i]:
        mx_list.append(i)

# 최빈값이 여러개라면 두번째로 
if len(mx_list) > 1:
    print(mx_list[1])
else:
    print(mx_list[0])

# 범위
print(max(arr) - min(arr))
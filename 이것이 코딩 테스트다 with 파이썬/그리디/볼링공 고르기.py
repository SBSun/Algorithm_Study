n, m = map(int, input().split())
data = list(map(int, input().split()))
arr = [0] * 11

for x in data:
    arr[x] += 1

res = 0

# 1부터 m까지의 각 무게에 대하여 처리
for i in range(1, m + 1):
    n -= arr[i] # 무게가 i인 볼링공의 개수 제외
    res += arr[i] * n # B가 선택하는 경우의 수와 곱하기

print(res)
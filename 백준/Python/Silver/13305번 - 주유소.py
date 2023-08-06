import sys

n = int(sys.stdin.readline())
distances = list(map(int, sys.stdin.readline().split()))
prices = list(map(int, sys.stdin.readline().split()))

min_price = prices[0]
res = min_price * distances[0] 

for i in range(1, n - 1):
    # 이전 도시들보다 기름 가격이 낮거나 같으면 기름 값 변경
    if min_price >= prices[i]:
        min_price = prices[i]
    
    # 거리 만큼 결제
    res += min_price * distances[i] 

print(res)
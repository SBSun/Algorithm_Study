import sys

t = int(input())

for _ in range(t):
    n = int(input())
    # 지원자 숫자만큼 리스트 생성
    arr = [[0] * 2 for _ in range(n)]
    res = 1

    for i in range(n):
        # 각 시험 등수 입력
        a, b = map(int, sys.stdin.readline().split())
        arr[i][0] = a
        arr[i][1] = b
    
    # a 성적 기준으로 오름차순 정렬
    arr.sort()

    max_b = arr[0][1]

    for i in range(1, n):
        b = arr[i][1]
        if max_b > b:
            res += 1
            max_b = b
    
    print(res)

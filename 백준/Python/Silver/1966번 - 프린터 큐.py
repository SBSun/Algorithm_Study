t = int(input())

for _ in range(t):
    n, m = map(int, input().split())
    priority = list(map(int, input().split()))
    index = [i for i in range(n)]
    cnt = 0

    while True:
        # 현재 문서가 중요도가 가장 높다면
        if priority[0] == max(priority):
            cnt += 1
            
            # 궁금한 문서인지 확인
            if index[0] == m:
                print(cnt)
                break
            # 아니라면 리스트에서 제거
            else:
                del priority[0]
                del index[0]
        
        # 나머지 문서들 중 현재 문서보다 중요도가 높은 문서가 하나라도 있으면
        else:
            # Queue의 가장 뒤에 재배치
            priority.append(priority[0])
            del priority[0]
            index.append(index[0])
            del index[0]
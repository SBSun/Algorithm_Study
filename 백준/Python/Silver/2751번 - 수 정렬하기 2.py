import sys

def mergeSort(list):
    # 리스트의 길이가 1이 될 때까지 분할
    if len(list) <= 1:
        return list
    
    # 중간 index
    mid = len(list) // 2
    # 중간 index로 리스트 나누기
    left = mergeSort(list[:mid])
    right = mergeSort(list[mid:])
    
    sorted = []
    p1, p2 = 0, 0

    # 두 개의 리스트를 병합
    while len(left) > p1 and len(right) > p2:
        if left[p1] <= right[p2]:
            sorted.append(left[p1])
            p1 += 1
        else:
            sorted.append(right[p2])
            p2 += 1
    
    # left, right에 남은 요소가 있다면 통째로 mergeList에 추가
    sorted += left[p1:]
    sorted += right[p2:]

    return sorted

n = int(sys.stdin.readline())
arrays = [int(sys.stdin.readline()) for _ in range(n)]

sorted = mergeSort(arrays)

for i in sorted:
    print(i)
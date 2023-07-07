n = int(input())
cnt = n

for _ in range(n):
    word = input()
    
    for i in range(len(word) - 1):
        # 앞뒤 문자가 다를 경우
        if word[i] != word[i + 1]:
            if word[i + 1] in word[:i]:
                cnt -= 1
                break

print(cnt)
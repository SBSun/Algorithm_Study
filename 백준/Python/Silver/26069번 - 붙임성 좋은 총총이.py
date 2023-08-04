import sys

n = int(sys.stdin.readline())
cnt = 0
name_list = set(['ChongChong'])

for _ in range(n):
    a, b = sys.stdin.readline().strip().split()
    
    if a in name_list:
        name_list.add(b)
    elif b in name_list:
        name_list.add(a)

print(len(name_list))
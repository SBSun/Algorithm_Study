x = int(input())
line = 1

while x > line:
    x -= line
    line += 1   

if line % 2 == 1:
    print(line - x + 1, x, sep='/')
else:
    print(x, line - x + 1, sep='/')
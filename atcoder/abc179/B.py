n = int(input())
xy = [map(int, input().split()) for _ in range(n)]
x, y = [list(i) for i in zip(*xy)]
count = 0
buf = 0

for xi, yi in zip(x, y):
    if xi == yi:
        buf += 1
    else:
        if buf > count:
            count = buf
        buf = 0

if buf > count:
    count = buf

if count >= 3:
    print('Yes')
else:
    print('No')
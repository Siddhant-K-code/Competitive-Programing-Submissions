import copy
from itertools import combinations
h, w, k = map(int, input().split())
c =[input() for i in range(h)]
ans = 0
y = []
for i in range(h):
    y.append(i)
x = []
for i in range(w):
    x.append(i)
for i in range(h+1):
    ty = list(combinations(y, i))
    for j in range(w+1):
        tx = list(combinations(x, j))
        for l in ty:
            for m in tx:
                cnt = 0
                for p in l:
                    for q in m:
                        if c[p][q] == '#':
                            cnt += 1
                if cnt == k:
                    ans += 1
print(ans) 
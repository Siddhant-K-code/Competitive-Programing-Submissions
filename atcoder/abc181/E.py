n,m = map(int,input().split())
H = list(map(int,input().split()))
W = list(map(int,input().split()))
H.sort(reverse = True)
if n==1:
    ans = float('inf')
    for m in W:
        ans = min(ans,abs(m-H[0]))
    print(ans);exit()
from copy import deepcopy
from bisect import bisect_left
from collections import deque
C = deque(deepcopy(H))

O = [0,C[0]-C[1]]
C.popleft()
C.popleft()
while len(C)>1:
    x = C.popleft()
    y = C.popleft()
    O.append(O[-1]+x-y)

H.sort()
D = deque(deepcopy(H))
E = [0,-D[0]+D[1]]
D.popleft()
D.popleft()
while len(D)>1:
    x = D.popleft()
    y = D.popleft()
    E.append(E[-1]-x+y)
# print(O,E)
H.sort()
ans = float('inf')
for m in W:
    idx = bisect_left(H,m)
    if idx%2==0:
        tmp = E[idx//2]
    else:
        tmp = E[(idx-1)//2]

    if idx%2==0:
        tmp+=abs(m-H[idx])
    else:
        tmp+=abs(m-H[idx-1])

    if idx%2==0:
        tmp+=O[(1+n)//2-idx//2-1]
    else:
        tmp+=O[(1+n)//2-(idx-1)//2-1]

    ans =min(ans,tmp)
print(ans)
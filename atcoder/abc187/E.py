import sys
sys.setrecursionlimit(2*10**5)
input = sys.stdin.readline
from collections import deque
n = int(input())
e = [[] for i in range(n+1)]
ab = [tuple(map(int,input().split())) for i in range(n-1)]
for a,b in ab:
    e[a].append(b)
    e[b].append(a)

q = int(input())
Q = [tuple(map(int,input().split())) for i in range(q)]


q = deque([1])
par = [-1]*(n+1)
par[1] = 0
while q:
    now = q.popleft()
    for nex in e[now]:
        if par[nex] != -1:
            continue
        par[nex] = now
        q.append(nex)

ans = [0]*(n+1)
for t,c,x in Q:
    if t == 1:
        a,b = ab[c-1]
        if par[b] == a:
            ans[b] -= x
            ans[1] += x
        else:
            ans[a] += x
    else:
        a,b = ab[c-1]
        if par[b] == a:
            ans[b] += x
        else:
            ans[a] -= x
            ans[1] += x


q = deque([1])
use = [0]*(n+1)
use[1] = 1
while q:
    now = q.popleft()
    for nex in e[now]:
        if use[nex]:
            continue
        ans[nex] += ans[now]
        use[nex] = 1
        q.append(nex)
for i in ans[1:]:
    print(i)
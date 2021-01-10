from collections import deque

n,m = map(int,input().split())
a = list(map(int,input().split()))
e = [[] for i in range(n)]
par = [0]*n
child = [0]*n
for i in range(m):
    x,y = map(int,input().split())
    x -= 1
    y -= 1
    par[x] += 1
    child[y] += 1
    e[x].append(y)

q = deque([])
for i in range(n):
    if par[i] and child[i] == 0:
        q.append((i,a[i]))
count = [-10**20]*n
while q:
    now,buy = q.popleft()
    for nex in e[now]:
        if count[nex] < a[nex]-buy:
            count[nex] = a[nex]-buy
            q.append((nex,min(buy,a[nex])))
ans = max(count)
print(ans)
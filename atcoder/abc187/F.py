n,m = map(int,input().split())
g = [[0]*n for i in range(n)]
for i in range(m):
    a,b = map(int,input().split())
    a -= 1
    b -= 1
    g[a][b] = g[b][a] = 1
for i in range(n):
    g[i][i] = 1

dp = [n]*(1<<n)

for i in range(1,1<<n):
    check = True
    s = []
    for j in range(n):
        if i >> j & 1:
            s.append(j)
    for j in s:
        for t in s:
            if g[j][t] != 1:
                check = False
                break

        if check == False:
            break
    if check:
        dp[i] = 1
        continue

    now = i
    while now:
        now = (now-1) & i
        dp[i] = min(dp[i],dp[now]+dp[i^now])
print(dp[-1])
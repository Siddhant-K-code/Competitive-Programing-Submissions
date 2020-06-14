from collections import Counter
import bisect
N = int(input())
A = list(map(int,input().split()))
cnt = Counter(A)
A.sort()
ans = 0
MX = 10**6
P = [0] * (MX+1)
for a in A:
    if P[a]==0:
        for i in range(MX+1):
            x = a*i
            if x > MX:
                break
            P[x] = 1
        if cnt[a]==1:
            ans+=1
print (ans)
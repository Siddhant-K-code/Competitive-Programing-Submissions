n,C = map(int,input().split())

l = [tuple(map(int,input().split())) for i in range(n)]
s = set()
for a,b,c in l:
    s.add(a)
    s.add(b+1)
dic = {}
s = sorted(list(s))
for i,j in enumerate(s):
    dic[j] = i
count = [0]*(len(s)+1)

ans = 0
for a,b,c in l:
    count[dic[a]] += c
    count[dic[b+1]] -= c

for i in range(len(s)-1):
    if count[i] < C:
        ans += (s[i+1]-s[i])*count[i]
    else:
        ans += (s[i+1]-s[i])*C
    count[i+1] += count[i]
print(ans)
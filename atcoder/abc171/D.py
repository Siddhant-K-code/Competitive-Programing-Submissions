n = int(input())
a = list(map(int, input().split()))
q = int(input())
b = list(list(map(int, input().split())) for i in range(q))
dic = {}
for i in range(n):
    if a[i] not in dic.keys():
        dic[a[i]] = 1
    else:
        dic[a[i]] += 1
su = sum(a)
for i in range(q):
    if b[i][0] not in dic.keys():
        pass
    else:
        su += (b[i][1]-b[i][0])*dic[b[i][0]]
        if b[i][1] not in dic.keys():
            dic[b[i][1]] = 0
        dic[b[i][1]] += dic[b[i][0]]
        dic[b[i][0]] = 0
    print(su) 
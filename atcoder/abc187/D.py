n=int(input())

al=[]
bl=[]
for i in range(n):
    a,b=map(int,input().split())
    al.append(a)
    bl.append(b)

sa=sum(al)
sb=sum(bl)

pl=[]
for i in range(n):
    p=2*al[i]+bl[i]
    pl.append(p)

pl.sort(reverse=True)

taka=0
aoki=sa

j=0
while taka<=aoki:
    taka+=pl[j]
    j+=1
print(j)
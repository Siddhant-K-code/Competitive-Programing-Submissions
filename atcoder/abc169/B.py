n = int(input())
a = list(map(int, input().split()))
su = 1
flag = True
if 0 in a:
    print(0)
else:
    for i in range(n):
        su *= a[i]
        if su > 10**18:
            flag = False
            break
    if flag:
        print(su)
    else:
        print(-1) 
def factorization(n):
    arr = []
    temp = n
    for i in range(2, int(-(-n**0.5//1))+1):
        if temp%i==0:
            cnt=0
            while temp%i==0:
                cnt+=1
                temp //= i
            arr.append([i, cnt])

    if temp!=1:
        arr.append([temp, 1])

    if arr==[]:
        arr.append([n, 1])

    return arr

n = int(input())
if n == 1:
    print(0)
else:
    l = factorization(n)
    dic = []
    for i in range(len(l)):
        tmp = l[i][0]
        dic.append(tmp)
        while n >= tmp:
            tmp *= l[i][0]
            if n < tmp:
                break
            dic.append(tmp)
    dic.sort()
    cnt = 0
    while n != 1:
        flag = True
        for i in range(len(dic)):
            if n%dic[i] == 0:
                n //= dic[i]
                cnt += 1
                dic.pop(i)
                flag = False
                break
        if flag:
            break
    print(cnt) 
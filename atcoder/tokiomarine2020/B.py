a,v=map(int,input(). split())
b,w = map(int,input(). split())
t=int(input())


if a<=b:

    dist_a = a + t*v

    dist_b = b + t*w

    if dist_a>=dist_b:
        print('YES')
    else:
        print('NO')
else:

    dist_a = a - t*v

    dist_b = b - t*w

    if dist_a<=dist_b:
        print('YES')
    else:
        print('NO')
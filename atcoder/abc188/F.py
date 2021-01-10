X,Y = map(int,input().split())
if X >= Y:
    print(X-Y)
    exit()

dic = {}
import sys
sys.setrecursionlimit(10**5)
def dfs(x):
    if x == X:
        return 0
    if abs(x-X) == 1:
        return 1
    if x <= X:
        return X-x
    if x in dic:
        return dic[x]
    l2 = x//2
    r2 = (x+1)//2

    count = x-X
    count = min(count,abs(l2*2-x)+1+dfs(l2))
    count = min(count,abs(r2*2-x)+1+dfs(r2))
    dic[x] = count
    return count

print(dfs(Y))
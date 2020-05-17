import itertools
from collections import defaultdict
import collections
import math
import sys
import queue
sys.setrecursionlimit(200000)
mod = 1000000007

n, m = map(int, input().split())

graph = {i: [] for i in range(1, n + 1)}
for _ in range(m):
    u, v = map(int, input().split())
    graph[u].append(v)
    graph[v].append(u)

tf = [False] * (n + 1)
sirube = [0] * (n + 1)
def bfs(v):
    q = queue.Queue()
    q.put([v,0])
    tf[v] = True
    while not q.empty():
        sub = q.get()
        now = sub[0]
        before = sub[1]
        for next in graph[now]:
            if tf[next]:
                continue
            tf[next] = True
            if sirube[next] == 0:
                sirube[next] = now
            q.put([next, now])

bfs(1)
for i in range(2, n + 1):
    if sirube[i] == 0:
        print("No")
        exit()

print("Yes")
for i in range(2, n + 1):
    print(sirube[i]) 
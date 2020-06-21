n = int(input())
a = list(map(int, input().split()))
ans = 0
for i in range(n):
    ans ^= a[i]
for i in range(n):
    print(ans^a[i], end=' ')
print()
"""
for i in range(n):
    ans = 0
    for j in range(n):
        if i != j:
            ans ^= a[j]
    print(ans)
""" 
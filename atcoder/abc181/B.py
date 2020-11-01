N = int(input())
ans = 0
list_ans = [[0] * 2 for i in range(N)]
for i in range(N):
  list_ans[i] = list(map(int,input().split()))
  ans = ans + int((list_ans[i][1] - list_ans[i][0]  + 1)* (list_ans[i][0] + list_ans[i][1])/2)
print(ans)
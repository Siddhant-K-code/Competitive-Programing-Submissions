
table = [0] * 10
ans = False
num_list = []

# 数字それぞれの個数をカウントする
N = list(input())
for num in N:
  table[int(num)] += 1

# 下三桁で計算するため、３つ以上ある場合は３個に減らす
for i in range(10):
  if table[i] > 3:
    table[i] = 3

# 数字のリストを作成する
for i in range(1, 10):
  for _ in range(table[i]):
    num_list.append(i)

num_len = len(num_list)

# 一桁の場合
if num_len == 1:
  if num_list[0] % 8 == 0:
    ans = True

# 二桁の場合ß
elif num_len == 2:
  a,b = list(map(str, num_list))
  ab = int(a + b)
  ba = int(b + a)
  if ab % 8 == 0 or ba % 8 == 0:
    ans = True

# 三桁以上の場合、全ての組み合わせを試す。 最大でも30個 * 30個 * 30個
else:
  for first in range(num_len-2):
    for second in range(first+1, num_len-1):
      for third in range(second+1, num_len):
        f = str(num_list[first])
        s = str(num_list[second])
        t = str(num_list[third])
        # 3つの数字の並べ方（６通り）を全て試す
        x1 = int(f + s + t)
        x2 = int(f + s + t)
        x3 = int(s + f + t)
        x4 = int(s + t + f)
        x5 = int(t + f + s)
        x6 = int(t + s + f)

        if x1 % 8 == 0 or x2 % 8 == 0 or x3 % 8 == 0 or x4 % 8 == 0 or x5 % 8 == 0 or x6 % 8 == 0:
          ans = True
          break

if ans == True:
  print('Yes')
else:
  print('No')
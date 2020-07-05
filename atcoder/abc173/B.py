import collections
n = int(input())
s = [input() for _ in range(n)]
s_count = collections.Counter(s)
print("AC x {}".format(s_count["AC"]))
print("WA x {}".format(s_count["WA"]))
print("TLE x {}".format(s_count["TLE"]))
print("RE x {}".format(s_count["RE"]))
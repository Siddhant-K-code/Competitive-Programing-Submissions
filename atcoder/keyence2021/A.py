import sys

input = sys.stdin.readline


def main():
    N = int(input())
    a = list(map(int, input().split()))
    b = list(map(int, input().split()))
    d = []
    a_max, b_max = 0, 0
    for i in range(N):
        a_max = max(a_max, a[i])
        d.append(a_max * b[i])
    c_max = 0
    for i in range(N):
        c_max = max(c_max, d[i])
        print(c_max)


if __name__ == '__main__':
    main()
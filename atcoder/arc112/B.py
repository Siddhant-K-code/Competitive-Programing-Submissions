import sys
import math
from collections import deque

sys.setrecursionlimit(1000000)
MOD = 10 ** 9 + 7
input = lambda: sys.stdin.readline().strip()
NI = lambda: int(input())
NMI = lambda: map(int, input().split())
NLI = lambda: list(NMI())
SI = lambda: input()


def make_grid(h, w, num): return [[int(num)] * w for _ in range(h)]


def main():
    B, C = NMI()
    c = C // 2

    if C == 1:
        if B == 0:
            print(1)
            exit()
        else:
            print(2)
            exit()

    def get_len(xl, xr, yl, yr):
        xn = xr - xl + 1
        yn = yr - yl + 1
        if xr < yl or yr < xl:
            return xn + yn
        if xn < yn:
            xl, yl = yl, xl
            xr, yr = yr, xr
            xn, yn = yn, xn

        if yl < xl:
            return xr - yl + 1
        elif xr < yr:
            return yr - xl + 1
        else:
            return xr - xl + 1


    if C%2:
        xl = B-c
        xr = B+c-1
        yl = -B-c
        yr = -B+c
        print(get_len(xl, xr, yl, yr))

    else:
        xl = B - c
        xr = B + c - 1
        yl = -B - c + 1
        yr = -B + c - 1
        print(get_len(xl, xr, yl, yr))




if __name__ == "__main__":
    main()
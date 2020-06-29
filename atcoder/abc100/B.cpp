#include <bits/stdc++.h>
using namespace std;
int calc(int x)
{
  int ret = 0;
  while (x % 100 == 0)
  {
    x /= 100;
    ++ret;
  }
  return ret;
}
int main()
{
  int D, N;
  cin >> D >> N;
  int cnt = 0, val = 0;
  while (cnt < N)
  {
    ++val;
    if (calc(val) == D)
      ++cnt;
  }
  cout << val << '\n';
  return 0;
}
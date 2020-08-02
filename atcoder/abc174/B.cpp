#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  double d;
  cin >> n >> d;

  int cnt = 0;
  for (int i = 0; i < n; ++i) {
    long double x, y;
    cin >> x >> y;
    long double dist = sqrt(x * x + y * y);
    if (dist <= d) {
      ++cnt;
    }
  }

  cout << cnt << '\n';

  return 0;
}
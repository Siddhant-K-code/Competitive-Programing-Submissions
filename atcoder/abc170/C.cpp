#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout << fixed << setprecision(15);

  int x, n;
  cin >> x >> n;

  if (n == 0) {
    cout << x << '\n';
    return 0;
  }

  vector<int> p(n);
  for (int i = 0; i < n; ++i) {
    cin >> p[i];
  }
  sort(p.begin(), p.end());

  int cnt = 0;
  int dist = 999;
  int ans = -100;
  for (int i = -100; i <= 200; ++i) {
    if (i == p[cnt]) {
      ++cnt;
      continue;
    }
    if (dist > abs(x - i)) {
      dist = abs(x - i);
      ans = i;
    }
  }

  cout << ans << '\n';

  return 0;
}
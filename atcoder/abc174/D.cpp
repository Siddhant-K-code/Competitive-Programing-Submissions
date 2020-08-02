#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  string s;
  cin >> n >> s;

  int r = 0, w = 0, swap = 0;
  for (int i = 0; i < n; ++i) {
    if (s[i] == 'W') {
      ++w;
    } else {
      ++r;
    }
  }
  int ans = min(r, w);

  for (int i = 0; i < r; ++i) {
    if (s[i] == 'W') {
      ++swap;
    }
  }
  ans = min(ans, swap);

  cout << ans << '\n';

  return 0;
}
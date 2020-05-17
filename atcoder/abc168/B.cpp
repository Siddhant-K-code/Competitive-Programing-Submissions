#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout << fixed << setprecision(15);

  int k;
  string s;
  cin >> k >> s;

  if (s.size() <= k) {
    cout << s << '\n';
  } else {
    for (int i = 0; i < k; ++i) {
      cout << s[i];
    }
    cout << "..." << '\n';
  }

  return 0;
}
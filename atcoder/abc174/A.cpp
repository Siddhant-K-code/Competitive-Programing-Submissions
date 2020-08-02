#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int x;
  cin >> x;

  string ans = "No";
  if (x >= 30) {
    ans = "Yes";
  }

  cout << ans << '\n';

  return 0;
}
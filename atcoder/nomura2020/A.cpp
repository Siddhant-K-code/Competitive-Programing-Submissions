// Author : Siddhant Khare 

#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout << fixed << setprecision(15);

  int h1, m1, h2, m2, k;
  cin >> h1 >> m1 >> h2 >> m2 >> k;

  int ans = (h2 * 60 + m2 - k) - (h1 * 60 + m1);
  cout << ans << '\n';

  return 0;
}
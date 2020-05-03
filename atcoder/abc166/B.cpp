#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout << fixed << setprecision(15);

  int N, K;
  cin >> N >> K;

  vector<bool> nn(N, false);
  for (int i = 0; i < N; i++) {
    int a;
    cin >> a;
    for (int j = 0; j < a; j++) {
      int b;
      cin >> b;
      nn[b - 1] = true;
    }
  }

  int sum = 0;
  for (int i = 0; i < N; i++) {
    if (nn[i] == false) {
      sum++;
    }
  }

  cout << sum << '\n';

  return 0;
}
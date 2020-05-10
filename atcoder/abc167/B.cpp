#include <bits/stdc++.h>

using namespace std;

int main() {
  // input 1 
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout << fixed << setprecision(15);
  
  // definign variables

  int a, b, c, k;
  // input in variables
  cin >> a >> b >> c >> k;
  
  // logical execution

  int sum = 0;
  for (int i = 0; i < k; ++i) {
    // if else looping
    if (a > 0) {
      ++sum;
      --a;
      // el-if cond.
    } else if (b > 0) {
      --b;
    } else {
      --sum;
    }
  }
  // print answe 
  cout << sum << '\n';
// return value
  return 0;
}
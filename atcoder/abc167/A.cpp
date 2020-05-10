#include <bits/stdc++.h>

using namespace std;

int main() {
  // input values
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  //1st output
  cout << fixed << setprecision(15);
// defining string 
  string s, t;
  // input 
  cin >> s >> t;
// for loop cond.
  for (int i = 0; i < s.size(); ++i) {
    // if logical
    if (s[i] != t[i]) {
      // print ans
      cout << "No" << '\n';
      // return 
      return 0;
    }
  }
  // final answer 
  cout << "Yes" << '\n';

  return 0;
}
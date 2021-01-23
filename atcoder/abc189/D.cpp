#include <bits/stdc++.h>
using namespace std;
// #include <atcoder/all>
// using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int,int>;

int main() {
  int n;
  cin >> n;
  vector<string> a(n);
  rep(i,n) cin >> a[i];
  vector<ll> dp(n+1);
  dp[0] = 1;
  rep(i,n){
    if(a[i] == "AND"){
      dp[i+1] = dp[i];
    }else{
      dp[i+1] = dp[i] + (ll)pow((ll)2, i+1);
    }
  }
  cout << dp[n] << endl;
  return 0;
}
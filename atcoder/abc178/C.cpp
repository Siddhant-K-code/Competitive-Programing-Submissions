#include <bits/stdc++.h>
using namespace std;
typedef long double ld;
typedef long long ll;
const int mod = (int)1e9 + 7;
int pw(int a, int b) {
    int c = 1;
    for (int i = 0; i  < b;i ++) {
        c = (1LL * c * a) % mod;
    }
    return c;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    ll f = pw(10, n);
    f -= 2LL * pw(9, n);
    f += pw(8, n);
    f %= mod;
    if (f < 0) f += mod;
    cout << f;
    return 0;
}
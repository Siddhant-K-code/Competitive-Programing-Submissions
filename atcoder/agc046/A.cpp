#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, start, n) for (ll i = (ll)(start); i < (ll)(n); ++i)
static const int INFTY = (1 << 30);
ll N, M;
void func()
{
    ll X, tmp;
    cin >> X;
    tmp = X * 360 / gcd(X, 360);
    cout << tmp / X << endl;
}
int main()
{
    func();
}
#include <bits/stdc++.h>
using namespace std;

//def
#define debug(x) cout << #x << ": " << x << '\n'
#define out(x) cout << x << '\n'
#define repeat(i, a, b) for (int i = (int)(a); i < (int)(b); i++)
#define revrepeat(i, a, b) for (int i = (int)(b)-1; i >= (int)(a); i--)
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define revrep(i, n) for (int i = (int)(n)-1; i >= 0; i--)
#define foreach(e, v) for (auto &e : v)
#define all(x) (x).begin(), (x).end()
#define CYES cout << "Yes" << endl
#define CNO cout << "No" << endl
#define SPC(x) cout << fixed << setprecision(x)
#define ZERO(a) memset(a, 0, sizeof(a))
#define MINUS(a) memset(a, 0xff, sizeof(a))

typedef long long ll;
typedef long double ld;
typedef vector<int> vi;
typedef vector<vector<int>> vii;
typedef vector<ll> vl;
typedef vector<vector<ll>> vll;
typedef pair<int, int> P;
constexpr int MOD = 1e9 + 7;
constexpr int INF = __INT_MAX__;               // 2^31 - 1
constexpr long long INFLL = __LONG_LONG_MAX__; // 2^61 - 1
constexpr int MAX_N = 1e5 + 5;
constexpr double PI = acos(-1);

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;
    vector<int> a(n);
    rep(i, n) cin >> a[i];
    sort(all(a), greater<int>());
    auto comPair = [](const P &firstElof, const P &secondElof) {
        int m1 = min(firstElof.first, firstElof.second);
        int m2 = min(secondElof.first, secondElof.second);
        return m1 < m2;
    };
    priority_queue<P, vector<P>, decltype(comPair)> que(comPair);

    ll ans = a[0];
    que.emplace(a[0], a[1]);
    que.emplace(a[0], a[1]);
    repeat(i, 2, n) {
        auto p = que.top();
        que.pop();

        ans += min(p.first, p.second);

        que.emplace(p.first, a[i]);
        que.emplace(p.second, a[i]);
    }
    out(ans);
    return 0;
}

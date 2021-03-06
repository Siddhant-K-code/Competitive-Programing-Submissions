/*
 * Author : Siddhant Khare
 */
#include <bits/stdc++.h>
using namespace std;

/*******  All Required define Pre-Processors and typedef Constants *******/
#define ll long long
#define ld long double
#define arr array
#define si(t) scanf("%d", &t)
#define sl(t) scanf("%ld", &t)
#define sll(t) scanf("%lld", &t)
#define sc(t) scanf("%c", &t)
#define ss(t) scanf("%s", &t)
#define sf(t) scanf("%f", &t)
#define slf(t) scanf("%lf", &t)
#define pi(x) printf("%d\n", x)
#define pl(x) printf("%ld\n", x)
#define pll(x) printf("%lld\n", x)
#define pf(x) printf("%f")
#define sz(x) (int)(x).size()
#define mem(a, b) memset(a, (b), sizeof(a))
#define FOR(i, j, k, in) for (int i = j; i < k; i += in)
#define RFOR(i, j, k, in) for (int i = j; i >= k; i -= in)
#define REP(i, j) FOR(i, 0, j, 1)
#define RREP(i, j) RFOR(i, j, 0, 1)
#define all(x) x.begin(), x.end()
#define rall(cont) cont.end(), cont.begin()
#define FOREACH(it, l) for (auto it = l.begin(); it != l.end(); it++)
#define IN(A, B, C) assert(B <= A && A <= C)
#define sortall(x) sort(all(x))
#define mp make_pair
#define pb push_back
#define PI 3.1415926535897932384626433832795
const int N = 2e5;
const int maxN = 1e6;
const ll MOD = 1e9 + 7;
const ll oo = 1e18;
const int M = 1e6 + 10;
const int limi = 1e9 + 1;
const ll maxn = 2e5 + 5;

ll a[maxn];
ll d[maxn], vtd[maxn], vtc[maxn];

#define read(type) readInt<type>()
const double pi = acos(-1.0);
typedef pair<int, int> PII;
typedef vector<int> VI;
typedef vector<string> VS;
typedef vector<PII> VII;
typedef vector<VI> VVI;
typedef map<int, int> MPII;
typedef set<int> SETI;
typedef multiset<int> MSETI;

/**************************************/

/******** User-defined Function *******/
void solve()
{
    ll a, b, c, d;
    scanf("%lld%lld%lld%lld", &a, &b, &c, &d);
    // Algorithm

    // Output
    // pll(ans) // long long print
}

/**************************************/

/********** Main()  function **********/

int main()
{

    ll q;
    cin >> q;
    while (q--) {
        int n;
        cin >> n;
        a[0] = -1;
        for (int i = 1; i <= n; i++)
            vtd[i] = -1, vtc[i] = -1;
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
            if (a[i] != a[i - 1]) {
                d[a[i]]++;
                if (vtd[a[i]] == -1)
                    vtd[a[i]] = i;
            }
            vtc[a[i]] = i;
        }
        ll ans = LLONG_MAX;
        for (ll i = 1; i <= n; i++) {
            if (d[i] != 0) {
                ans = min(ans, d[i] - 1 + (vtd[i] != 1) + (vtc[i] != n));
                d[i] = 0;
            }
        }
        cout << ans << '\n';
    }
}
/********  Main() Ends Here *************/

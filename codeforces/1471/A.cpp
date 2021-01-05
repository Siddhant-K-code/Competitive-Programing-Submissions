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
#define INF (int)1e9
#define EPS 1e-9
#define PI 3.1415926535897932384626433832795
#define MOD 1000000007
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
    ll n, x, d1 = 0, nd1 = 0, res = 0;
    // scanf("%lld%lld%lld%lld", &a, &b, &c, &d);
    // Algorithm
    cin >> n >> x;

    for (int i = 0; i < n; i++) {
        int m;
        cin >> m;
        if (m % x == 0) {
            res = res + m / x;
            d1 = d1 + m / x;
        } else {
            res = res + m / x + 1;
            nd1 = nd1 + m;
        }
    }
    d1 = d1 + nd1 / x;
    if (nd1 % x != 0) {
        d1++;
    }
    cout << d1 << " " << res << "\n";
    // Output
    // pll(ans) // long long print
}

/**************************************/

/********** Main()  function **********/
int main()
{

    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);

    ll T;
    scanf("%lld", &T);
    while (T--) {
        solve();
    }
}
/********  Main() Ends Here *************/

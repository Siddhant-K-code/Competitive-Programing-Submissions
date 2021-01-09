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
    ll all = 1e18;
    int n1, n2, n3;
    scanf("%d%d%d", &n1, &n2, &n3);
    VI v1, v2, v3;
    ll ans = 0;
    REP(i, n1)
    {
        ll x;
        cin >> x;
        v1.pb(x);
        ans += x;
    }
    REP(i, n2)
    {
        ll x;
        cin >> x;
        v2.pb(x);
        ans += x;
    }
    REP(i, n3)
    {
        ll x;
        cin >> x;
        v3.pb(x);
        ans += x;
    }

    sortall(v1);
    sortall(v2);
    sortall(v3);
    ll temp1 = 0, temp2 = 0, temp3 = 0;
    REP(i, n1)
    {
        temp1 += v1[i];
    }
    REP(i, n2)
    {
        temp2 += v2[i];
    }
    REP(i, n3)
    {
        temp3 += v3[i];
    }

    all = min(temp1, min(temp2, temp3));
    all = min(all, 1ll * v1[0] + v2[0]);
    all = min(all, 1ll * v1[0] + v3[0]);
    all = min(all, 1ll * v2[0] + v3[0]);

    ans -= 2 * all;
    cout << ans << endl;
    // Algorithm

    // Output
    // pll(ans) // long long print
}

/**************************************/

/********** Main()  function **********/
int main()
{

    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);

    ll T = 1;
    //scanf("%lld", &T);
    while (T--)
    {
        solve();
    }
}
/********  Main() Ends Here *************/

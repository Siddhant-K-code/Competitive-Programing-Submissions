/*
 * Author : Siddhant Khare
 */
#include <bits/stdc++.h>
using namespace std;

/*******  All Required define Pre-Processors for Optimizations *******/
#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")
#pragma GCC optimize("O3")
#pragma GCC target("sse4")

/**************************************/

/*******  All Required define Pre-Processors and typedef Constants *******/
#define ll long long
#define ld long double
#define endl '\n'
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
#define inputarr(a, n)          \
    for (int i = 0; i < n; ++i) \
    cin >> a[i]
#define max_3(a, b, c) max(a, max(b, c))
#define min_3(a, b, c) min(a, min(b, c))
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * b) / gcd(a, b)
#define rall(cont) cont.end(), cont.begin()
#define FOREACH(it, l) for (auto it = l.begin(); it != l.end(); it++)
#define IN(A, B, C) assert(B <= A && A <= C)
#define sortall(x) sort(all(x))
#define mp make_pair
#define pb push_back
#define PI 3.1415926535897932384626433832795
const int MAX_N = 2e9 + 9;
const ll MOD = 1e9 + 7;
const ll INF = 1e18;
#define read(type) readInt<type>()
const double pi = acos(-1.0);
typedef pair<int, int> PII;
typedef pair<ll, ll> PLL;
typedef vector<int> VI;
typedef vector<ll> VLL;
typedef vector<string> VS;
typedef vector<PII> VPI;
typedef vector<VI> VVI;
typedef map<int, int> MPII;
typedef map<ll, ll> MPLL;
typedef set<int> SETI;
typedef multiset<int> MSETI;

/**************************************/
PLL a[150001], b[150001], c[150001], d[150001];
set<PLL> s1, s2, s3;
/******** User-defined Function *******/
void solve()
{
    ll n1, n2, n3, n4, ans = (ll)1e12;
    sll(n1);
    sll(n2);
    sll(n3);
    sll(n4);

    for (ll i = 1; i <= n1; i++)
    {
        cin >> a[i].first;
        a[i].second = i;
    }
    for (ll i = 1; i <= n2; i++)
    {
        cin >> b[i].first;
        b[i].second = i;
    }
    for (ll i = 1; i <= n3; i++)
    {
        cin >> c[i].first;
        c[i].second = i;
    }
    for (ll i = 1; i <= n4; i++)
    {
        cin >> d[i].first;
        d[i].second = i;
    }
    ll m1, m2, m3;
    sll(m1);
    for (ll i = 1; i <= m1; i++)
    {
        ll x, y;
        sll(x);
        sll(y);
        s1.insert({x, y});
    }
    sll(m2);
    for (ll i = 1; i <= m2; i++)
    {
        ll x, y;
        sll(x);
        sll(y);
        s2.insert({x, y});
    }
    sll(m3);
    for (ll i = 1; i <= m3; i++)
    {
        ll x, y;
        sll(x);
        sll(y);
        s3.insert({x, y});
    }
    sort(d + 1, d + 1 + n4);
    for (ll i = 1; i <= n3; i++)
    {
        bool checker = false;
        for (ll j = 1; j <= n4; j++)
        {
            ll x = i;
            ll y = d[j].second;
            if (s3.find({x, y}) == s3.end())
            {
                checker = true;
                c[i].first += d[j].first;
                break;
            }
        }
        if (!checker)
            c[i].first = MAX_N;
    }
    sort(c + 1, c + 1 + n3);
    for (ll i = 1; i <= n2; i++)
    {
        bool checker = false;
        for (ll j = 1; j <= n3; j++)
        {
            if (c[j].first == MAX_N)
                break;
            ll x = i;
            ll y = c[j].second;
            if (s2.find({x, y}) == s2.end())
            {
                checker = true;
                b[i].first += c[j].first;
                break;
            }
        }
        if (!checker)
            b[i].first = MAX_N;
    }
    sort(b + 1, b + 1 + n2);

    for (ll i = 1; i <= n1; i++)
    {
        for (ll j = 1; j <= n2; j++)
        {
            if (b[j].first == MAX_N)
                break;
            ll x = i;
            ll y = b[j].second;
            if (s1.find({x, y}) == s1.end())
            {
                ans = min(ans, a[i].first + b[j].first);
                break;
            }
        }
    }

    if (ans >= MAX_N)
        cout << -1;
    else
        cout << ans;
    // Algorithm

    // Output
    // pll(ans) // long long print
}

/**************************************/

/********** Main()  function **********/
signed main()
{

    /* #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif */

    /*__*/ double start = clock(); /*__*/

    //______________________________________
    ll T = 1;
    // sll(T);
    while (T--)
    {
        solve();
    }
    //______________________________________
    cerr << "Time: " << (clock() - start) * 1.0 / CLOCKS_PER_SEC << setprecision(3) << "s\n";
}
/********  Main() Ends Here *************/
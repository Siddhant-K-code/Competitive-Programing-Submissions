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
#define ull unsigned long long
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
#define sz(x) (ll)(x).size()
#define mem(a, b) memset(a, (b), sizeof(a))
#define FOR(i, j, k, in) for (ll i = j; i < k; i += in)
#define RFOR(i, j, k, in) for (ll i = j; i >= k; i -= in)
#define REP(i, j) FOR(i, 0, j, 1)
#define RREP(i, j) RFOR(i, j, 0, 1)
#define all(x) x.begin(), x.end()
#define inputarr(a, n)         \
    for (ll i = 0; i < n; ++i) \
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
#define PI 3.141592653589793238462
#define fastio()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e18;
const double pi = acos(-1.0);
typedef vector<int> VI;
typedef pair<ll, ll> PLL;
typedef pair<int, int> PII;
typedef vector<ll> VLL;
typedef vector<string> VS;
typedef vector<VI> VVI;
typedef map<int, int> MPII;
typedef map<ll, ll> MPLL;
typedef vector<PII> VPI;
typedef set<int> SETI;
typedef set<ll> SETLL;
typedef multiset<int> MSETI;
typedef multiset<ll> MSETLL;

template <typename T, typename U>
static inline void amin(T &x, U y)
{
    if (y < x)
        x = y;
}
template <typename T, typename U>
static inline void amax(T &x, U y)
{
    if (x < y)
        x = y;
}
/**************************************/

// This part of Template is from a CodeForces User

// UnComment When Required -Takes Extra Memory

/* 
bool revsort(ll a, ll b) { return a > b; }
void swap(ll &x, ll &y)
{
    ll temp = x;
    x = y;
    y = temp;
}

ll exp(ll x, ll y, ll p)
{
    x %= p;
    ll res = 1;
    while (y)
    {
        if (y % 2)
            res = (res * x % p) % p;
        x = (x * x) % p;
        y /= 2;
    }
    return res;
}
ll expo(ll x, ll y)
{
    ll res = 1;
    while (y)
    {
        if (y % 2)
            res = (res * x % MOD) % MOD;
        x = (x * x) % MOD;
        y /= 2;
    }
    return res;
}
ll fact[1000006] = {0};
void facto()
{
    fact[0] = 1;
    fact[1] = 1;
    for (int i = 2; i < 1000006; i++)
        fact[i] = (fact[i - 1] * i) % MOD;
}

ll add(ll a, ll b) { return (a % MOD + b % MOD + MOD) % MOD; }
ll sub(ll a, ll b) { return (a % MOD - b % MOD + MOD) % MOD; }
ll mul(ll a, ll b) { return ((a % MOD) * (b % MOD) + MOD) % MOD; }
ll inv(ll x) { return expo(x, MOD - 2); }
*/
// void google(ll t) { cout << "Case #" << t << ": "; }

/**************************************/

/******** User-defined Function *******/
void solve()
{
    ll n, ans = 0;
    sll(n);
    VLL arr(n);

    // vec - map

    map<ll, vector<ll>> mp;

    REP(i, n)
    {
        sll(arr[i]);

        //

        if (mp.find(arr[i]) != mp.end())
        {

            // pushing every node in mp

            mp[arr[i]].pb(i);
        }

        else
        {

            // res vector
            // push in map of vec.

            VLL res;
            mp[arr[i]] = res;
            mp[arr[i]].pb(i);
        }
    }

    // for All map

    for (auto it : mp)
    {
        VLL arr1 = it.second;
        VLL tp;

        // cout << sz(arr1) << endl;

        REP(i, sz(arr1))
        {
            // cout << (n - arr1[i]) << endl;

            tp.pb(n - arr1[i]);
        }

        // sz - 2 reverse

        for (ll i = sz(arr1) - 2; i >= 0; --i)
        {
            // cout << tp[i] << endl;
            tp[i] += tp[i + 1];
        }

        // sz - 1 from start 0

        REP(i, sz(arr1) - 1)
        {
            // cout << tp[i + 1] << endl;
            // cout << ans << endl;
            ans += (arr1[i] + 1) * (tp[i + 1]);
        }

        // cout << "secondLast ans = " << ans << endl;
    }
    pll(ans);

    // Output

    // pll(ans) // long long print
}

/**************************************/

/********** Main()  function **********/
int main()
{
    /* #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif */

    //______________________________________

    // fastio();

    // ll T = 1;

    ll T;
    sll(T);

    while (T--)
    {
        solve();
    }
    //______________________________________
}
/********  Main() Ends Here *************/
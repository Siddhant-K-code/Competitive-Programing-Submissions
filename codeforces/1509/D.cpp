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
#define FOR(i, j, k, in) for (ll i = j; i < k; i += in)
#define RFOR(i, j, k, in) for (ll i = j; i >= k; i -= in)
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
const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e18;
#define read(type) readInt<type>()
const double pi = acos(-1.0);
typedef pair<int, int> PII;
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

/******** User-defined Function *******/
void solve()
{
    ll n;
    cin >> n;
    string s1, s2, s3, ans;
    cin >> s1 >> s2 >> s3;
    ll cnt1 = 0, cnt2 = 0, cnt3 = 0;
    for (char ch : s1)
        cnt1 += (ch == '0');
    for (char ch : s2)
        cnt2 += (ch == '0');
    for (char ch : s3)
        cnt3 += (ch == '0');
    ll flag;
    if ((cnt1 >= n) + (cnt2 >= n) + (cnt3 >= n) < 2)
    {
        flag = 1;
        if (cnt1 >= n)
            s1 = s3;
        else if (cnt2 >= n)
            s2 = s3;
    }
    else
    {
        flag = 0;
        if (cnt1 < n)
            s1 = s3;
        else if (cnt2 < n)
            s2 = s3;
    }
    for (ll i = 0, j = 0; i < 2 * n || j < 2 * n; i++, j++)
    {
        cnt1 = cnt2 = 0;

        // cout << cnt1 << " " << cnt2 << " " << cnt3 << endl;

        // cout << flag << endl;

        while (i < 2 * n && s1[i] != flag + '0')
            cnt1++, i++;
        while (j < 2 * n && s2[j] != flag + '0')
            cnt2++, j++;
        for (ll k = 1; k <= max(cnt1, cnt2); k++)
            ans.pb(flag ^ 1 + '0');
        if (ans.size() < 3 * n)
            ans.pb(flag + '0');
    }

    // cout << ans.size() << endl;

    // cout << ans << endl;
    
    while (ans.size() < 3 * n)
        ans.pb('0');
    cout << ans << endl;
    // Algorithm

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

    /*__*/ double start = clock(); /*__*/

    //______________________________________
    ll T;
    sll(T);
    while (T--)
    {
        solve();
    }
    //______________________________________
    cerr << "Time: " << (clock() - start) * 1.0 / CLOCKS_PER_SEC << setprecision(3) << "s\n";
}
/********  Main() Ends Here *************/
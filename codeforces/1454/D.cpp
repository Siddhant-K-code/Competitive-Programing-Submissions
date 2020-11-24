/*
 * Author : Siddhant Khare
 */
#include <bits/stdc++.h>
#include <stdio.h>
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
//#define mp make_pair
#define pb push_back
#define INF 1e18
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
/*void solve()
{
    ll a, b, c, d;
    scanf("%lld%lld%lld%lld", &a, &b, &c, &d);
    // Algorithm

    // Output
    // pll(ans) // long long print
}*/

vector<ll> v;
void primeFactors(ll n)
{
    while (n % 2 == 0) {
        v.pb(2);
        n = n / 2;
    }
    for (int i = 3; i <= sqrt(n); i = i + 2) {
        while (n % i == 0) {
            v.pb(i);
            n = n / i;
        }
    }
    if (n > 2)
        v.pb(n);
}
void solve()
{
    ll t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        v.clear();
        primeFactors(n);
        // for(auto it:v)
        //   cout<<it<<" ";
        // cout<<endl;
        unordered_map<int, int> mp;
        for (auto it : v) {
            mp[it]++;
        }
        ll mx = 0, d = -1;
        for (auto x : mp) {
            if (mx < x.second) {
                d = x.first;
                mx = x.second;
            }
        }
        cout << mx << endl;
        while (mx != 1) {
            cout << d << " ";
            n = n / d;
            mx--;
        }
        cout << n << endl;
    }
}
/**************************************/

/********** Main()  function **********/

int32_t main()
{

    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    solve();
    return 0;
}

/********  Main() Ends Here *************/

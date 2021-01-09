/*
 * Author : Siddhant Khare
 */
#include <bits/stdc++.h>
using namespace std;

/*******  All Required define Pre-Processors and typedef Constants *******/
#define ll long long
#define ld long double
//#define arr array
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
const int c = 300005;
int w, n, t[c], cnt, maxi;
bool jo[c];
void solve()
{

    // ll a, b, c, d;
    // scanf("%lld%lld%lld%lld", &a, &b, &c, &d);
    // Algorithm
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> t[i];
    }
    t[0] = t[1], t[n + 1] = t[n];
    cnt = 0, maxi = 0;
    for (int i = 1; i <= n; i++)
    {
        jo[i] = 0;
        if (t[i] > max(t[i - 1], t[i + 1]) || t[i] < min(t[i - 1], t[i + 1]))
        {
            cnt++;
            jo[i] = 1;
        }
    }
    if (cnt > 0)
    {
        maxi = 1;
    }
    for (int i = 2; i < n - 1; i++)
    {
        if (jo[i])
        {
            if (jo[i - 1] && jo[i] && jo[i + 1])
            {
                maxi = 3;
            }
            if (jo[i + 1] && (i == 2 || i == n - 2 || abs(t[i - 1] - t[i]) >= abs(t[i + 1] - t[i]) || abs(t[i + 2] - t[i + 1]) >= (abs(t[i] - t[i + 1])) || t[i - 2] == t[i - 1] || t[i + 2] == t[i + 3]))
            {
                maxi = max(maxi, 2);
            }
        }
    }
    cout << cnt - maxi << "\n";
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
    while (T--)
    {
        solve();
    }
}
/********  Main() Ends Here *************/

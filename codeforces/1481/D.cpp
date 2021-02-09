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
typedef set<int> SETI;
typedef multiset<int> MSETI;

/**************************************/

/******** User-defined Function *******/
void solve()
{
    ll n, m;
    sll(n);
    sll(m);
    vector<string> s(n);
    REP(i, n)
    cin >> s[i];
    REP(i, n)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (m % 2 == 1 || s[i][j] == s[j][i])
            {
                cout << "YES\n";
                for (int k = 0; k < m + 1; k++)
                {
                    if (k % 2 == 0)
                        cout << i + 1 << " ";
                    else
                        cout << j + 1 << " ";
                }
                cout << "\n";
                return;
            }
        }
    }
    REP(i, n)
    {
        int inA = -1, inB = -1;
        for (int j = 0; j < n; j++)
        {
            if (s[j][i] == 'a')
                inA = j;
            if (s[j][i] == 'b')
                inB = j;
        }
        int outA = -1, outB = -1;
        for (int j = 0; j < n; j++)
        {
            if (s[i][j] == 'a')
                outA = j;
            if (s[i][j] == 'b')
                outB = j;
        }
        if (inA != -1 && outA != -1)
        {
            cout << "YES\n";
            if (m % 4 == 0)
            {
                cout << i + 1 << " ";
                for (int j = 0; j < m; j++)
                {
                    if (j % 4 == 0)
                        cout << outA + 1 << " ";
                    if (j % 4 == 1)
                        cout << i + 1 << " ";
                    if (j % 4 == 2)
                        cout << inA + 1 << " ";
                    if (j % 4 == 3)
                        cout << i + 1 << " ";
                }
                cout << "\n";
            }
            else
            {
                cout << inA + 1 << " ";
                cout << i + 1 << " ";
                for (int j = 0; j < m - 2; j++)
                {
                    if (j % 4 == 0)
                        cout << outA + 1 << " ";
                    if (j % 4 == 1)
                        cout << i + 1 << " ";
                    if (j % 4 == 2)
                        cout << inA + 1 << " ";
                    if (j % 4 == 3)
                        cout << i + 1 << " ";
                }
                cout << outA + 1 << " ";
                cout << "\n";
            }
            return;
        }
        if (inB != -1 && outB != -1)
        {
            cout << "YES\n";
            if (m % 4 == 0)
            {
                cout << i + 1 << " ";
                for (int j = 0; j < m; j++)
                {
                    if (j % 4 == 0)
                        cout << outB + 1 << " ";
                    if (j % 4 == 1)
                        cout << i + 1 << " ";
                    if (j % 4 == 2)
                        cout << inB + 1 << " ";
                    if (j % 4 == 3)
                        cout << i + 1 << " ";
                }
                cout << "\n";
            }
            else
            {
                cout << inB + 1 << " ";
                cout << i + 1 << " ";
                for (int j = 0; j < m - 2; j++)
                {
                    if (j % 4 == 0)
                        cout << outB + 1 << " ";
                    if (j % 4 == 1)
                        cout << i + 1 << " ";
                    if (j % 4 == 2)
                        cout << inB + 1 << " ";
                    if (j % 4 == 3)
                        cout << i + 1 << " ";
                }
                cout << outB + 1 << " ";
                cout << "\n";
            }
            return;
        }
    }
    cout << "NO\n";

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
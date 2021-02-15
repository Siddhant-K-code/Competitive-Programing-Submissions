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
    ll n, ans = 0;
    sll(n);

    if (n % 2)
    {
        // half way
        ll mid = (n - 1) / 2;
        bool checker = true;
        VLL game;
        REP(i, mid)
        {
            if (checker)
            {
                checker = false;
                game.pb(1);
            }
            else
            {
                checker = true;
                game.pb(-1);
            }
        }
        REP(i, mid)
        {
            if (checker)
            {
                checker = false;
                game.pb(1);
            }
            else
            {
                checker = true;
                game.pb(-1);
            }

            // mid--;
        }
        for (ll i = 1; i < n; i++)
        {

            //  1 -> n
            for (ll j = i + 1; j <= n; j++)
            {
                // cout << " j = " << game[j] << endl;

                // cout << " i = " << game[i + 1] << endl;

                ans = game[j - (i + 1)];
                cout << ans << " ";
            }
        }
        cout << endl;
    }

    // else if (n < 0)
    // {
    //     ll mid = (n - 1) / 2;
    //     bool checker = true;
    //     VLL game;
    //     REP(i, mid)
    //     {
    //         if (checker)
    //         {
    //             checker = false;
    //             game.pb(1);
    //         }
    //         else
    //         {
    //             checker = true;
    //             game.pb(-1);
    //         }
    //     }
    //     REP(i, mid)
    //     {
    //         if (checker)
    //         {
    //             checker = false;
    //             game.pb(1);
    //         }
    //         else
    //         {
    //             checker = true;
    //             game.pb(-1);
    //         }

    //         // mid--;
    //     }

    //     for (ll i = 1; i < n; i++)
    //     {
    //         //  1 -> n
    //         for (ll j = i + 1; j <= n; j++)
    //         {
    //             ans = game[j - 1];
    //             cout << ans << " ";
    //         }
    //     }

    //     // cout << endl;
    // }

    else
    {

        // same half mid

        ll mid = (n - 2) / 2;
        bool checker = true;
        VLL game;
        REP(i, mid)
        {
            if (checker)
            {
                checker = false;
                game.pb(1);
            }
            else
            {
                checker = true;
                game.pb(-1);
            }
        }

        // getting in zero

        game.pb(0);
        REP(i, mid)
        {
            if (checker)
            {
                checker = false;
                game.pb(1);
            }
            else
            {
                checker = true;
                game.pb(-1);
            }

            // mid--;
        }
        for (ll i = 1; i < n; i++)
        {
            //  1 -> n
            for (ll j = i + 1; j <= n; j++)
            {

                // cout << " j = " << game[j] << endl;
                // cout << " i = " << game[i + 1] << endl;
                
                ans = game[j - (i + 1)];
                cout << ans << " ";
            }
        }
        cout << endl;
    }
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
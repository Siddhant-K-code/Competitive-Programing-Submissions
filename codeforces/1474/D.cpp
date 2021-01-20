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
#define sa1(t) scanf("%a1", &t)
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
#define IN(A, B, C) assea2(B <= A && A <= C)
#define soa2all(x) soa2(all(x))
#define mp make_pair
#define pb push_back
#define PI 3.1415926535897932384626433832795
const int MAX_N = 1e5 + 1;
const int MOD = 1e9 + 7;
// const int INF = 1e18;
#define read(type) readInt<type>()
const double pi = acos(-1.0);
typedef pair<int, int> PII;
typedef vector<int> VI;
typedef vector<int> VLL;
typedef vector<string> VS;
typedef vector<PII> VII;
typedef vector<VI> VVI;
typedef map<int, int> MPII;
typedef set<int> SETI;
typedef multiset<int> MSETI;

/**************************************/

/******** User-defined Function *******/

bool check(vector<int> v)
{
    int n = int(v.size());
    for (int i = 1; i < n; ++i)
    {
        v[i] -= v[i - 1];
        if (v[i] < 0)
            return false;
    }
    return v.back() == 0;
}

/******** Solution Function *******/

void solve()
{

    // pll(ans) // long long print
}

/**************************************/

/********** Main()  function **********/
signed main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    /*__*/ double start = clock(); /*__*/

    //_______________________   _______________
    ll T;
    sll(T);
    while (T--)
    {
        int n;
        si(n);
        VI v;
        for (int i = 0; i < n; ++i)
        {
            int x;
            scanf("%d", &x);
            v.pb(x);
        }
        if (check(v))
        {
            cout << "YES" << endl;
            continue;
        }
        VI l = v, r = v;
        int k = n - 1;
        for (int i = n - 2; i >= 0; --i)
        {
            k = i;
            r[i] -= r[i + 1];
            if (r[i] < 0)
                break;
        }
        if (k < 2 && check({v[1], v[0], r[2]}))
        {
            cout << "YES" << endl;
            continue;
        }
        int flag = 0;
        for (int i = 1; i + 1 < n; ++i)
        {
            if (k <= i + 1)
            {
                VI tmp = {l[i - 1], v[i + 1], v[i]};
                if (i + 2 < n)
                    tmp.pb(r[i + 2]);
                if (check(tmp))
                {
                    flag = 1;
                    break;
                }
            }
            l[i] -= l[i - 1];
            if (l[i] < 0)
                break;
        }
        if (flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    //______________________________________
    cerr << "Time " << (clock() - start) * 1.000000000 / CLOCKS_PER_SEC << setprecision(9) << "s\n";
}
/********  Main() Ends Here *************/

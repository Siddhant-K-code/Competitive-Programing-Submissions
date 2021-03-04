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
const int MAX_N = 1e5 + 1;
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
const int N = 505;
vector<int> e[N];
int d[N], res[N], vis[N], n, m;
queue<int> q;
/******** User-defined Function *******/

int solve(int b)
{
    // Algorithm

    for (int i = 1; i <= n; i++)
    {
        res[i] = d[i];
        vis[i] = 0;
        if (i == b)
            res[i]--;
        if (res[i] <= 0)
        {
            q.push(i);
            vis[i] = 1;
        }
    }
    while (!q.empty())
    {
        int u = q.front();
        q.pop();
        for (auto v : e[u])
        {
            res[v]--;
            if (vis[v] == 0 && res[v] <= 0)
            {
                q.push(v);
                vis[v] = 1;
            }
        }
    }
    for (int i = 1; i <= n; i++)
        if (!vis[i])
            return 0;
    return 1;

    // Output
    // pll(ans) // long long print
}

/**************************************/

/********** Main()  function **********/
int main()
{

    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdout);
    // #endif

    /*__*/ double start = clock(); /*__*/

    //______________________________________
    scanf("%d%d", &n, &m);
    for (int i = 1; i <= m; i++)
    {
        int u, v;
        scanf("%d%d", &u, &v);
        e[u].push_back(v);
        d[v]++;
    }
    for (int i = 1; i <= n; i++)
    {
        if (solve(i))
        {
            puts("YES");
            return 0;
        }
    }
    puts("NO");
    return 0;
    //______________________________________
    cerr << "Time " << (clock() - start) * 1.0 / CLOCKS_PER_SEC << setprecision(5) << "s\n";
}
/********  Main() Ends Here *************/
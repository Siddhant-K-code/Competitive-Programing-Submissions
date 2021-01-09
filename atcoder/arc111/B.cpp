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
    ll n;
    cin >> n;
    ll a[n], b[n];
    set<ll> st;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i] >> b[i];
        st.insert(a[i]);
        st.insert(b[i]);
    }
    cout << st.size() << "\n";
    // Algorithm

    // Output
    // pll(ans) // long long print
}

/**************************************/

/********** Main()  function **********/
ll prt[400001];
ll find_set(ll v)
{
    if (v == prt[v])
        return v;
    return find_set(prt[v]);
}

void union_sets(ll a, ll b)
{
    a = find_set(a);
    b = find_set(b);
    if (a != b)
        prt[b] = a;
}

signed main()
{
    ll n, a, b;
    cin >> n;
    set<ll> res;
    for (ll i = 0; i <= 400000; i++)
        prt[i] = i;
    map<ll, vector<ll>> v;
    for (ll i = 0; i < n; i++)
    {
        cin >> a >> b;
        if (a > b)
            swap(a, b);
        v[a].push_back(b);
    }
    for (auto i : v)
    {
        for (auto j : i.second)
        {
            if (res.find(find_set(j)) == res.end())
                res.insert(find_set(j)), union_sets(i.first, j);
            else
                res.insert(find_set(i.first));
        }
    }
    cout << res.size() << endl;
}
/********  Main() Ends Here *************/

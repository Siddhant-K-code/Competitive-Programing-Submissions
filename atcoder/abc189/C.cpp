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

/******** User-defined Function *******/
typedef pair<ll, ll> pl;
vector<ll> left(vector<ll> &v)
{
    ll i, j, k, l, n = v.size();
    vector<ll> res(n);
    stack<ll> st;
    for (i = 0; i < n; i++)
    {
        while (!st.empty() && v[i] <= v[st.top()])
            st.pop();
        if (st.empty())
            res[i] = -1;
        else
            res[i] = st.top();
        st.push(i);
    }
    return res;
}
vector<ll> right(vector<ll> &v)
{
    ll i, j, k, l, n = v.size();
    vector<ll> res(n);
    stack<ll> st;
    for (i = n - 1; i >= 0; i--)
    {
        while (!st.empty() && v[i] <= v[st.top()])
            st.pop();
        if (st.empty())
            res[i] = n;
        else
            res[i] = st.top();
        st.push(i);
    }
    return res;
}

void solve()
{
    ll i, j, k, n, m, a, b, u;
    cin >> n;
    vector<ll> v(n);
    for (i = 0; i < n; i++)
        cin >> v[i];
    vector<ll> l = left(v);
    vector<ll> r = right(v);
    ll ans = 0;
    for (i = 0; i < n; i++)
    {
        // cout<<"l["<<i<<"] = "<<l[i]<<" r["<<i<<"] = "<<r[i]<<endl;
        ans = max(ans, v[i] * (r[i] - l[i] - 1));
    }
    cout << ans;
    // Algorithm

    // Output
    // pll(ans) // long long print
}

/**************************************/

/********** Main()  function **********/
int main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    /*__*/ double start = clock(); /*__*/

    //______________________________________
    ll T = 1;
    // sll(T);
    while (T--)
    {
        solve();
    }
    //______________________________________
    cerr << "Time " << (clock() - start) * 1.0 / CLOCKS_PER_SEC << setprecision(5) << "s\n";
}
/********  Main() Ends Here *************/

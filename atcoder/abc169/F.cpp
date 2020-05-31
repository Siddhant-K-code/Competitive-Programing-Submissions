#include <bits/stdc++.h>

#define ll long long
#define ld long double
#define debug(x) \
	//    (cout << #x << ": " << (x) << endl)
#define eb emplace_back
#define fi first
#define se second

using namespace std;

const int nm = 3002;
const int mod = 998244353;

int n, m, a[nm];
int g[nm][nm];

int main() {
#ifdef LOCAL
	freopen("input.txt", "r", stdin);
#endif
	scanf("%d%d", &n, &m);
	for (int i = 1; i <= n; ++i) {
		scanf("%d", &a[i]);
	}
	g[0][0] = 1;
	for (int i = 1; i <= n; ++i) {
		g[i][0] = (g[i - 1][0] * 2) % mod;
		for (int j = 1; j <= m; ++j) {
			g[i][j] = (g[i - 1][j] * 2) % mod;
			if (a[i] <= j) {
				g[i][j] = (g[i][j] + g[i - 1][j - a[i]]) % mod;
			}
		}
	}
	printf("%d\n", g[n][m]);
}
#include <bits/stdc++.h>

#define ll long long
#define ld long double
#define debug(x) \
	//    (cout << #x << ": " << (x) << endl)
#define eb emplace_back
#define fi first
#define se second

using namespace std;

const int nm = 200002;

int n;
pair<ll, bool> a[2 * nm];

pair<ll, ll> get(int k) {
	int o = 0, c = 0, cur = 0;
	ll x1 = -1, x2 = -1;
	for (int i = 1; i <= 2 * n; ++i) {
		if (!a[i].se) {
			o++;
			cur++;
		}
		if (o >= k && c < k && cur > 0) {
			if (x1 == -1) {
				x1 = a[i].fi;
			}
			x2 = a[i].fi;
		}
		if (a[i].se) {
			c++;
			cur--;
		}
	}
	return {x1, x2};
}

int main() {
#ifdef LOCAL
	freopen("input.txt", "r", stdin);
#endif
	scanf("%d", &n);
	for (int i = 1; i <= n; ++i) {
		scanf("%lld%lld", &a[2 * i - 1].fi, &a[2 * i].fi);
		a[2 * i - 1].se = 0;
		a[2 * i].se = 1;
	}
	sort(a + 1, a + 2 * n + 1);
	if (n & 1) {
		auto p = get(n / 2 + 1);
		cout << p.se - p.fi + 1 << "\n";
		return 0;
	}
	auto p1 = get(n / 2), p2 = get(n / 2 + 1);
	cout << (p2.se + p1.se - p2.fi - p1.fi + 1) << "\n";
}
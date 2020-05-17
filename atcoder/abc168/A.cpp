#include <bits/stdc++.h>
#define rep(x,to) for(int (x)=0;(x)<(to);(x)++)
#define rep2(x,fr,to) for(int (x)=(fr);(x)<(to);(x)++)
#define sz(v) (int)(v).size()
using namespace std;
using P = pair<int, int>;
typedef long long ll;
int main()
{
	cin.tie(0);
	ios_base::sync_with_stdio(false);
	string n;
	cin >> n;
	char last = n[sz(n)-1];
	if (last == '3') cout << "bon" << '\n';
	else if (last == '0' || last == '1' || last == '6' || last == '8') cout << "pon" << '\n';
	else cout << "hon" << '\n';

	return 0;
}
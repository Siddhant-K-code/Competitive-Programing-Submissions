#pragma warning(disable : 4996)
#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define dup(x) x.erase(unique(x.begin(), x.end()),x.end())
typedef long long int ll;
typedef unsigned long long int ull;
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    bool isNone[200];
    memset(isNone, 0, sizeof(isNone));
    ll ans = 0;
    ll mn = 1e9+7;
    ll x,n;
    cin >> x >> n;
    vector<ll> v(n);
    for(int i = 0;i<n;i++){\
        cin >> v[i];
        isNone[v[i]] = true;
    }
    if(n == 0) ans = x;
    else{
        for(int i = 0;i<=101;i++){
            if(abs(x-i) < mn && !isNone[i]){
                mn = abs(x-i);
                ans = i;
            }
        }
    }
    cout << ans;

	return 0;
} 
    #include <bits/stdc++.h>
    using namespace std;
     
    int main(){
        int w, h, W = 0, H = 0, n;
        cin >> w >> h >> n;
        vector<int> x(n), y(n), a(n);
        for(int i = 0; i < n; i++) cin >> x[i] >> y[i] >> a[i];
     
        for(int i = 0; i < n; i++){
            if(a[i] == 1) W = max(W, x[i]);
            else if(a[i] == 2) w = min(w, x[i]);
            else if(a[i] == 3) H = max(H, y[i]);
            else if(a[i] == 4) h = min(h, y[i]);
        }
        if(w <= W || h <= H)  cout << 0 << endl;
        else cout << (w - W) * (h - H) << endl;
        return 0;
    }
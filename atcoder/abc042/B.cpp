#include <bits/stdc++.h>
using namespace std;

int main(){
    int L, N;
    cin >> N >> L;
    vector<string> str(N);
    for(int i = 0; i < N; i++){
        cin >> str.at(i);
    }
    sort(str.begin(), str.end());
    for(int i = 0; i < N; i++){
        cout << str.at(i);
    }
    cout << endl;
}
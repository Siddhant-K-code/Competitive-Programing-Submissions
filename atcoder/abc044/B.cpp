#include <bits/stdc++.h>
using namespace std;
 
int main(void){
    string s;
    cin >> s;
    int count[26] = {};
    
    for(int i = 0;i < s.size();i++){
        count[s[i] - 'a']++;
    }
 
    for(int i = 0;i < 26;i++){
        if(count[i] % 2 == 1) {
            cout << "No" << endl;
            return 0;
        }
    }
 
    cout << "Yes" << endl;
    
    return 0;
}
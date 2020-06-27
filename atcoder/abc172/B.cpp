#include <bits/stdc++.h>
using namespace std;

int main() {
  string s,t;
  cin >> s >> t;
  int count = 0;

  for(int i = 0; i < s.size(); i++){
    if(s.at(i) != t.at(i)){
      s.at(i) = t.at(i);
      count++;
    }
    else{
      continue;
    }
  }
  cout << count;
}
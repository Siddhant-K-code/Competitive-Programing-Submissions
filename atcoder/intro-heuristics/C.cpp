#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int D;
  vector<pair<int, int>> c(26);
  vector<vector<int>> s(D, vector<int>(26));
  vector<int> t(D);
  
  cin >> D;
  for(int i = 0; i < 26; i++){
    cin >> c.at(i).first;
    c.at(i).second = 0;
  }
  
  for(int i = 0; i < D; i++){
    for(int j = 0; j < 26; j++){
      cin >> s.at(i).at(j);
    }
  }
  
  for(int i = 0; i < D; i++){
    cin >> t.at(i);
  }
  
  vector<int> M(1);
  cin >> M.at(0);
  vector<pair<int, int>> q(M.at(0));
  
  for(int i = 0; i < M.at(0); i++){
    int a = 0;
    int b = 0;
    cin >> a >> b;
    q.at(i).first = a;
    q.at(i).second = b;
  }

  int Pl = 0;
  int Mi = 0;
  
  for(int k = 0; k < M.at(0); k++){
    t.at(q.at(k).first-1) = q.at(k).second;
    for(int i = 0; i < D; i++){
      Pl += s.at(i).at(t.at(i)-1);
      c.at(t.at(i)-1).second = i + 1;
      for(int j = 0; j < 26; j++){
        Mi += c.at(j).first*(i+1 - c.at(j).second);
      }
      Pl -= Mi;
      Mi = 0;
    }
    cout << Pl << endl;
    Pl = 0;
    for(int i = 0; i < 26; i++){
      c.at(i).second = 0;
    }
  }
}
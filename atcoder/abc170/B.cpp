#include <bits/stdc++.h>
using namespace std;

int main() {
  int X, Y;
  scanf("%d %d", &X, &Y);
  int A = 0;
  int B = 0;

  if(Y == 2*X || Y == 4*X){
    cout << "Yes";
    return 0;
  }
  else{
    for(int i = 0; i < X; i++){
      for(int j = 0; j < X; j++){
      	if(i + j == X){
        	if(2*i + 4 * j == Y){
          		cout << "Yes";
          		return 0;
            }
        }
      }
    }
  }         
  cout << "No";
}
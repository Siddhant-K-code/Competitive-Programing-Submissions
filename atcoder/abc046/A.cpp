#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    int n = 3;
    if(a == b){
        n--;
    }
    if(b == c){
        n--;
    }
    if(c == a){
        n--;
    }
    if(n == 0){
        n = 1;
    }
    printf("%d\n",n);
 
    return 0;
}
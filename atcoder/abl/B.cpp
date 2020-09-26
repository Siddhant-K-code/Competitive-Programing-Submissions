#include<bits/stdc++.h>
using namespace std;

int main(){

    long long int a, b, c, d;

    cin>>a>>b>>c>>d;

    

    if(a < d && b < c){
        cout<<"No"<<endl;
    }
    else if(c < b && d < a){
        cout<<"No"<<endl;
    }
    else{
        cout<<"Yes"<<endl;
    }

    return 0;
}
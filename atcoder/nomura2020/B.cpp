#include <iostream>
#include<vector>
using namespace std;

int main() {
	vector<char> pd;
	char x;
	while(cin>>x){
		if(x=='?')pd.push_back('D');
		else pd.push_back(x);
	}
	for(int i=0;i<pd.size();i++){
		cout<<pd[i];
	}
}
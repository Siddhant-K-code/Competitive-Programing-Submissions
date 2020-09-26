#include <bits/stdc++.h>
using namespace std;

vector<int> edges[100001];
int n,m;
bool *visited = new bool[100001]();

void dfs(int ind){
	
	visited[ind] = true;
	for(int i=0;i<edges[ind].size();i++){
		if(!visited[edges[ind][i]]){
			dfs(edges[ind][i]);
		}
			
	}
	
}

int main() {
	// your code goes here

	cin>>n>>m;
	
	for(int i=0;i<m;i++){
		int f,s;
		cin>>f>>s;
		edges[f].push_back(s);
		edges[s].push_back(f);
	}
	int cnt = 0;
	for(int i=1;i<=n;i++){
		if(!visited[i]){
			cnt++;
			dfs(i);
		}	
	}
	cout<<cnt-1;
	return 0;
}
#include<bits/stdc++.h>
using namespace std;
 
int main()
{
	int N;
	int K;
	int X;
	int Y;
	scanf("%d",&N);
	scanf("%d",&K);
	scanf("%d",&X);
	scanf("%d",&Y);
 
	int sum = 0;
	if(N<=K){
		sum += N*X;
	}
	else{
		sum += K*X + (N-K)*Y;
	}
	
	printf("%d\n",sum);
	return 0;
}
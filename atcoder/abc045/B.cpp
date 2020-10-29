#include<iostream>
#include<cstring>
using namespace std;
char a[105],b[105],c[105];
int main()
{
	cin>>a>>b>>c; 
	int A=strlen(a);
	int B=strlen(b);
	int C=strlen(c);
	int flag=1;
	int a1=0,a2=0,a3=0;
	while(1)
	{
		if(flag==1)
		{
			if(a1==A) break;
			flag=int(a[a1])-96;
			a1++;
		}
		if(flag==2)
		{
			if(a2==B) break;
			flag=int(b[a2])-96;
			a2++;
		}
		if(flag==3)
		{
			if(a3==C) break;
			flag=int(c[a3])-96;
			a3++;
		}
	}
	cout<<char(flag+64)<<endl;
	return 0;
}
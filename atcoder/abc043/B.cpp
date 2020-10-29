#include <bits/stdc++.h>
using namespace std;
 
int main()
{
	char a[100];
	char b[100];
	scanf("%s",a);
	int len = strlen(a);
	int k = 0;
	for(int i = 0;i < len;i++)
	{
		if(a[i] == 'B')
		{
			if(k != 0) 
				k--;
		}
		else
		{
			b[k++] = a[i];
		}
	}
	b[k] = '\0'; 
	printf("%s\n",b);
	return 0;
}
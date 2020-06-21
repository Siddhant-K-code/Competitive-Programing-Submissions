#include <iostream> 
#include <cctype> 
using namespace std; 
int main() 
{ 
	char x; 
	cin >> x; 
	if (isupper(x)) 
		cout << "A"; 
	else
		cout << "a";	 
	return 0; 
} 

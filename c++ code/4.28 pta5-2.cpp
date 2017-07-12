#include <iostream>
#include <string>
#include <set>
using namespace std;
int main(void)
{
	set<string> a;
	string n;
	while(1)
	{
		getline(cin,n);
		if(n == "end") break;
		a.insert(n);
	}
	while(1)
	{
		getline(cin,n);
		if(n == "end") break;
		a.insert(n);		
	}
	for(const auto &i : a)
		cout << i <<endl;
 } 

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;
int main()
{
	string a;
	vector<string> name;
	int i;
	while(1)
	{
		getline(cin,a);
		if(a=="end")
			break;
		name.push_back(a);
	}
	sort(name.begin(),name.end());
	for(i=0;i<name.size();i++)
	{
		cout<<name[i]<<" ";
	}
	return 0;
 } 

#include <iostream>
#include <list>
#include <string>
using namespace std;
int main()
{
	int size,i;
	cin>>size;
	string str;
	list<string> name;
	list<string>::iterator iter;
	for(i=0;i<size;i++)
	{
		cin>>str;
		name.push_back(str);
	}
	name.sort();
	for(iter = name.begin();iter!=name.end();iter++)
	{
		cout<<*iter<<endl;
	}
}

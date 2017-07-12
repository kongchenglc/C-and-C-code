#include <iostream>
#include <map>
#include <string>
using namespace std;
int main()
{
	string name;
	long number;
	map<string, long> student;
	map<string, long>::iterator iter;
	while(1)
	{
		cin>>name;
		if(name=="noname")break;
		cin>>number;
		student.insert(pair<string, long>(name,number));
	}
	cin>>name;
	iter=student.find(name);
	if(iter==student.end())
	{
		cout<<"Not found.";
	}
	else
	cout<<iter->second<<endl;
}

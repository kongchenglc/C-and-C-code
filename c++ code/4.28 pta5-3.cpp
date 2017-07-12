#include <iostream>
#include <map>
#include <string>
using namespace std;
int main()
{
	string name;
	double score;
	map<string, double> student;
	map<string, double>::iterator iter;
	while(1)
	{
		cin>>name;
		if(name=="noname")break;
		cin>>score;
		student.insert(pair<string,double>(name,score));
	}
	cin>>name;
	iter=student.find(name);
	if(iter==student.end())
	{
		cout<<"Not found.";
	}
	else
	cout<<iter->second*0.21<<endl;
}

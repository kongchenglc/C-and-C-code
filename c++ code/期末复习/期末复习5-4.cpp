#include<iostream>
#include<string>
#include<list>
#include<iterator>
using namespace std;
int main()
{
	int n;
	cin>>n;
	list<string> l;     			   //定义list
	string a;
	for(int i=0;i<n;i++)
	{
		cin>>a;
		l.push_back(a);
	}
	l.sort();
	list<string>::iterator p=l.begin();  //迭代器定义 
	while(p!=l.end())
	{
		cout<<*p<<endl;
		p++;
	}
	return 0;
} 

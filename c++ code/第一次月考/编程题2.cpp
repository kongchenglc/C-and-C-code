#include <iostream>
#include <string.h> 
using namespace std;

int main()
{
	string a,b,c;
	getline(cin,a,'\n');
	for(int i=a.length();i>0;i--)
	{
		if(a[i]=='\\'||a[i]=='/')
		{
			c=a.substr(i+1,a.length());
			b=a.substr(0,i);
//			cout<<b<<endl;
			break;
		}
	}
	cout<<b<<endl;
	cout<<c<<endl;
}


#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;

template <typename T> T Max(T a,T b){
	if(a>=b){
		return a;
	}
	return b;
}

int main( )
{
  int m,n;
  char c,d;
  string s1,s2;
  cin>>m>>n;
  cin>>c>>d;
  cin>>s1>>s2;
  cout<<Max(m,n)<<endl;
  cout<<Max(c,d)<<endl;
  cout<<Max(s1,s2)<<endl;
  return 0 ;
}

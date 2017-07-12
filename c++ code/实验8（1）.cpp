#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;
template <typename T> void change(T *a,T *b);
int main() 
{
	int a,b;
	cin>>a>>b;
	change(&a,&b);
	cout<<a<<" "<<b;
}
template <typename T> void change(T *a,T *b)
{
	T c;
	c=*a;
	*a=*b;
	*b=c;
}

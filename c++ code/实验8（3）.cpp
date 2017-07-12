#include <iostream> 
#include <stdio.h>
#include <stdlib.h>
using namespace std; 
template <typename T>T min(T a,T b) 
{  
	return (a<b)?a:b; 
} 

int main( ) 
{   
	double dobj1=1.1, dobj2=2.2;  
	char cobj1='c', cobj2='W';   
 	int i=12,j=68;  
	cout<<min(dobj1,dobj2)<<endl;  //隐式实例化  
	cout<<min(i,(int)cobj1)<<endl; //显式实例化  
	cout<<min(cobj2,(char)j)<<endl; //显式实例化  
	return 0; 
}

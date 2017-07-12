#include <iostream> 
#include <stdio.h>
#include <math.h>
using namespace std;
int main(){
	float a,b,c;
	cin>>a>>b>>c;
	if(a+b>=c||a+c>=b||b+c>=a){
		float s=(a+b+c)/2;
		float S=sqrt(s*(s-a)*(s-b)*(s-c));
		cout<<S<<endl;
	} 
	else{
		cout<<"No"<<endl;
	}
	return 0;
}

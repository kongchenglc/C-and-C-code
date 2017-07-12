#include <iostream>
#include <stdio.h>
#include <math.h>
#include <iomanip>
using namespace std;
int main(){
	double a;
	cin>>a;
	double S,s;
	S=a*a*sqrt(25+10*sqrt(5))/4;
	cout<<fixed<<setprecision(4)<<S<<endl;
	s=5*a;
	cout.unsetf(ios::fixed);
	cout<<s<<endl;
	return 0;
}

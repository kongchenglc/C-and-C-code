#include <iostream>
#include <math.h>
using namespace std;
double mySqrt(double x) throw(const char *){
	if( x < 0) throw( "Error: Can not take sqrt of negative number");
	else
	return sqrt(x);
}

int main() {
	double x;
	cin>>x;
	try{
		cout<<"The sqrt of "<<x<<" is "<<mySqrt(x)<<endl;	
	} catch(const char *s) {
		cout<<s<<endl;
	}
	
} 

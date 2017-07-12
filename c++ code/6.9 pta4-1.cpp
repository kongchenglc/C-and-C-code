#include <iostream>
using namespace std;



double hmean(double a, double b) throw(const char *){
	double c = 0.0;
	if( a + b == 0) throw( "bad hmean() arguments: a = -b not allowed");
	else c = 2*a*b/(a+b);
	
	return c;
}




int main()
{
    double x, y;
    cin >> x >> y; 
    try {
          cout<<hmean(x,y);
    }
    catch (const char * s)
    {
        cout << s << endl;
    }
    return 0;
}

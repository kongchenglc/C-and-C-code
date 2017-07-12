#include <iostream> 
using namespace std;  

class Triangle{
public:
	double width;
	double height;
	double getArea(){
		return width*height/2;		
	}
	Triangle(double w,double h):width(w),height(h){};
}; 

int main( )
{
  double w,h;
  cin>>w>>h;
  Triangle t(w,h);
  cout<<"The area of the Triangle is: "<<t.getArea( )<<endl;
}

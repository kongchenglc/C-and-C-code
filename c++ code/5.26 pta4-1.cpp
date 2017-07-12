#include <iostream>
using namespace std;
const double PI=3.1415926;
class Circle{
protected:
   double radius;
public: 
   Circle(double r){
      radius=r;
   }
   double getArea(){
      return PI*radius*radius;
   }
};

class Cylinder :public Circle{
    double height;             
	public:
	Cylinder(double r,double h):Circle(r) {
		height=h;
	}
	double getArea() {
		return (2*PI*radius*height+2*PI*radius);
	}
};


int main() 
{
   double r,h;
   cin>>r>>h;
   Cylinder Cy1(r,h) ;
   cout<<Cy1.getArea()<<endl;
   return 0;
}

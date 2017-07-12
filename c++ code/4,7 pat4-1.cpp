#include <iostream>
using namespace std;
class Shape{
public:
    double area ( ){ return -1; }
};


class Circle:public Shape{
public:
	Circle(double ri){
		r=ri;
	};
	double area (){
		return r*r*3.14;
	}
private:
	double r;
};
class Rectangle:public Shape{
public:
	Rectangle(double height,double width){
		h=height;
		w=width;
	};
	double area (){
		return h*w;
	}
private:
	double h,w;
};

 

int main()
{
    double r,h,w;
    cin>>r>>h>>w;
    Circle c(r); Rectangle rect(h,w);

    cout<<"The area of the Square is "<<c.area( )<<endl;
    cout<<"The area of the Rectangle is "<<rect.area( )<<endl;

    return 0;
}

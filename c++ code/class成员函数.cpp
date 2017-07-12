#include <iostream>
using namespace std;

class Rectangle{
	double width,height;
	public: 
	double set(double m,double n){
		width=m;
		height=n;
	}
	double getArea(){
		return width*height;
	}
	double getPerimeter(){
		return (width+height)*2;
	}

};

int main()
{    
    double m,n;
    cin>>m;
    cin>>n;
    Rectangle a;
    a.set(m,n);
    cout<<a.getArea()<<endl;
    cout<<a.getPerimeter()<<endl;
    return 0;
} 


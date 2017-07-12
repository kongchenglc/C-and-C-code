#include <iostream>
using namespace std;

class Rectangle{
	private:
		double width;
		double height;
	public:
		void set(double w,double h) {
			width = w;
			height = h;
		}	
		double getArea() {
			return width*height;
		}
		double getPerimeter() {
			return 2*(width+height);
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

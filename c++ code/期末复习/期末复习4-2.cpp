#include <iostream>
#include <cmath> 
using namespace std;

class shape {//抽象类 
public:
 virtual double getArea()=0;// 面积 
 virtual double getPerimeter()=0; // 周长 
};

class RTriangle : public shape {
	private:
		double a,b;
	public:
		RTriangle(double a,double b):a(a),b(b){}; //初始化列表 
		double getArea() {
			return a*b/2; 
		}
		double getPerimeter() {
			return sqrt(a*a+b*b)+a+b;
		}
};

int main()
{
  double a,b;
  cin>>a>>b;
  RTriangle t(a,b);
  cout<<t.getArea()<<endl;
  cout<<t.getPerimeter()<<endl;				
}

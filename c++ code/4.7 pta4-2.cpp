#include <iostream>
using namespace std;

class shape {
public:
  double getArea(){ };// 求面积
  double getPerimeter(){ }; // 求周长
};

class Circle:public shape {
public:
	Circle(double rr){
		r=rr;
	};
	double getArea(){
		return r*r*3.1415926;
	}
	double getPerimeter(){
		return 2*3.1415926*r;
	}
private:
	double r;
};


int main() {
  double r;
  cin>>r;
  Circle c(r);
  cout<<c.getArea()<<endl;
  cout<<c.getPerimeter()<<endl;
  return 0;
}
/* 请在这里填写答案 */

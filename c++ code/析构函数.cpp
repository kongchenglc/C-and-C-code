#include <iostream>
using namespace std;

class A {
	public :int n;
	A(int _n=10):n(_n) {
		cout<<"A("<<n<<")构造\t";
	}
	~A(){
		cout<<"A("<<n<<")析构\t";
	}
};
class B {
	public :int m;
	B(int _n=20):m(_n),a(_n) {
		cout<<"B("<<m<<")构造\t";
	}
	~B(){
		cout<<"B("<<m<<")析构\t";
	}
	A a;
};


B *gp,gb(30);

void fun4()
{
	static B b41(41);
	B b42(42);
	gp=new B(43);
}
void fun5()
{
	static B b51(51);
	B b52(52);
}
B fun6(B b61)
{
	delete gp;
	return b61;
}

int main(){
	cout<<"\n------main start--------"<<endl;
	fun4();cout<<"\n-------fun4 end-----"<<endl;
	fun5();cout<<"\n-------fun5 end-----"<<endl;
	B b71(71),b72(72);
	b72=fun6(b71);
	cout<<"\n-------main end----------"<<endl;
	return 0;
} 

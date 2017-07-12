#include <iostream>
using namespace std;
int& fun(int &a,int &b){
	return (a>b?a:b);
}
int main(){
int x=10,y=20,z=5;
fun(x,y)=z;
cout<<"y="<<y<<" z="<<z<<" x="<<x;
}


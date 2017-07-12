#include "iostream"
using std::cin;
using std::cout;
using std::endl; 

int abs(int a){
	return (a>=0?a:-a);
}
long abs(long a){
	return (a>=0?a:-a);
}
double abs(double a){
	return (a>=0?a:-a);
}

int main()
{
  int x1; 
  long x2; 
  double x3;
  cin>>x1;
  cin>>x2;
  cin>>x3;
  cout<<"x1="<<abs(x1)<<endl;
  cout<<"x2="<<abs(x2)<<endl;
  cout<<"x3="<<abs(x3)<<endl;
  return 0;
}

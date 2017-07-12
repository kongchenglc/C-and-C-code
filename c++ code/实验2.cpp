//#include <iostream> 
//using namespace std; 
//const int model = 90;    // model is a const const
//int v[]={1,2,3,4};		 // v[i] is a const 
//const int x;             // error: no initializer 
//void f( ) 
//{ 
//	model=200;		   	 // error 
//	v[2]++;				 // error
//}


//#include <iostream> 
//using namespace std; 
//void sqr_it(int *i);  // function prototype 函数原型 
//int main( ) 
//{  
//	int x;  
//	x=10;  
//	sqr_it(&x); 		 // compiling time error: type mismatch 类型不匹配  
//	cout<<"The square of x is "<<x<<'\n'; 
//	return 0; 
//} 
//void sqr_it(int *i) 
//{  
//	*i=(*i)*(*i); 
//}  


//#include "iostream"
//using std::cin;
//using std::cout;
//using std::endl; 
//
//int max(int a,int b){
//	return (a>=b?a:b);
//}
//long max(long a,long b){
//	return (a>=b?a:b);
//}
//double max(double a,double b){
//	return (a>=b?a:b);
//}
//
//int main()
//{
//  int x1,y1; 
//  long x2,y2; 
//  double x3,y3;
//  cin>>x1>>y1;
//  cin>>x2>>y2;
//  cin>>x3>>y3;
//  cout<<"x1="<<max(x1,y1)<<endl;
//  cout<<"x2="<<max(x2,y2)<<endl;
//  cout<<"x3="<<max(x3,y3)<<endl;
//  return 0;
//}


#include <iostream> 
using namespace std;
void f(int a[ ],int n, int &max, int &min)
{  
 	max=min=a[0];  
	for(int i=1;i<n;i++)  
	{  
		if(max<a[i]) 
		max=a[i]; 
		if(min>a[i]) 
		min=a[i];  
	} 
} 
int main() 
{  
	int a[10]={2,5,3,9,0,8,1,7,6,4};  
	int max,min;  
	f(a,10,max,min); 
	 cout<<"Max: "<<max<<endl;  
	 cout<<"Min: "<<min<<endl; 
} 

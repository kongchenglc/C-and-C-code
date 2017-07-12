#include <iostream>
using namespace std;

int f(int *a,int length,int &max,int &min){
	max=min=a[0];
	for(int i=0;i<length;i++){
		if(a[i]>max){
			max=a[i];
		}
		if(a[i]<min){
			min=a[i];
		}
	}
}
/* 你提交的代码将被嵌入到这里 */

int main( )
{
  int a[10];
  int max,min,i;
  for(i=0;i<10;i++){
     cin>>a[i];
  }
  f(a,10,max,min);
  cout<<"Max: "<<max<<endl;
  cout<<"Min: "<<min<<endl;
  return 0;
}

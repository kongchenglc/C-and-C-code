#include <iostream>
using namespace std;

void f(int *a,int num,int &max,int &min)
{
	int i;
	max=min=a[0];
	for(i=0;i<num;i++)
	{
		if(max<a[i])
		{
			max=a[i];
		}
		if(min>a[i])
		{
			min=a[i];
		}
	}
}

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

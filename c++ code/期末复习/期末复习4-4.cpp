#include <iostream>
#include <string>
using namespace std;



template <class T>				//ģ����÷� 
void sort(T *a, int size)
{ 
  for(int k=0;k<size;k++) 
  cin>>a[k];
     T temp;
     for(int i=0;i<size-1;i++)
     {
     	for(int j=0;j<size-i-1;j++)
     	{
     		if(a[j]>a[j+1])
     		{
     			temp=a[j];
     			a[j]=a[j+1];
     			a[j+1]=temp;
			 }
		 }
	 }
}  



template <class T>
void display(T* a, int size){
    for(int i=0; i<size-1; i++) cout<<a[i]<<' ';
    cout<<a[size-1]<<endl;
}
int main() {
     const int SIZE=10;
     int a[SIZE];
     char b[SIZE];
     double c[SIZE];
     string d[SIZE];
     int ty, size;
     cin>>ty;
     while(ty>0){
         cin>>size;
         switch(ty){
             case 1:sort(a,size); display(a,size); break;
             case 2:sort(b,size); display(b,size); break;
             case 3:sort(c,size); display(c,size); break;
             case 4:sort(d,size); display(d,size); break;
         }
         cin>>ty;
     }
      return 0;
}

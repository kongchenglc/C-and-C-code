#include <iostream>
#include <vector>
#include <algorithm> 
using namespace std;

template<class T>
class MyArray {
	public:
		MyArray(int chang);
		void sort();
		~MyArray();
		bool check();
		void display();
	private:
		T *data;
		T mum;
		int size;
};

template<class T>
void MyArray<T>::display()
{
	for(int i=0;i<size;i++)
	{
		cout<<data[i]<<" ";
	}
	cout<<endl;
 } 

template<class T>
void MyArray<T>::sort()
{
	T change;
	for(int i=0;i<size;i++)
	{
		for(int j=i+1;j<size;j++)
		{
			if(data[i]>data[j])
			{
				change=data[i];
				data[i]=data[j];
				data[j]=change;
			}
		}
	}
}

template<class T>
MyArray<T>::MyArray(int chang)
{
	size=chang;
	data=new T(size);
	for(int i=0;i<size;i++)
	{
		cin>>mum;
		data[i]=mum;
	}
}

template<class T>
MyArray<T>::~MyArray(){ delete[] data;}

template<class T>
bool MyArray<T>::check(){
    int i;
    for(i=0;i<size-1;i++)
        if(data[i]>data[i+1]) { cout<<"ERROR!"<<endl;return false;}
    return true;
}

int main( )
{
    MyArray<int> *pI;
    MyArray<float> *pF;
    MyArray<char> *pC;
    int ty, size;
    cin>>ty;
    while(ty>0){
        cin>>size;
        switch(ty){
            case 1: pI = new MyArray<int>(size);   pI->sort(); pI->check(); pI->display(); delete pI; break;
            case 2: pF = new MyArray<float>(size); pF->sort(); pF->check(); pF->display(); delete pF; break;
            case 3: pC = new MyArray<char>(size);  pC->sort(); pC->check(); pC->display(); delete pC; break;
        }
        cin>>ty;
    }
    return 0;
}

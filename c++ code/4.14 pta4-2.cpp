#include <iostream>
using namespace std;

template <typename T>T Min(T *p,int len)
{
	T min;
	min=p[0];
	for(int i=0;i<len;i++)
	{
		if(min>p[i])
		{
			min=p[i];
		}
	}
	return min;
}

int main( )
{
    int n,m,*pn,i=0;
    cin>>n;
    pn=new int[n];
    do{
        cin>>pn[i];
        i++;
    }while(i<n);

    double *pd;
    i=0;
    cin>>m;
    pd=new double[m];
    do{
        cin>>pd[i];
        i++;
    }while(i<m);

    cout<<Min(pn,n)<<endl;
    cout<<Min(pd,m)<<endl;
    delete [ ] pn;
    delete [ ] pd;
    return 0;
}

#include <iostream>
using namespace std;
template <typename T> void Swap(T &i,T &j)
{
	T change;
	change=i;
	i=j;
	j=change;
}

int main()
{
 int i,j;
 char m,n;
 cin>>i>>j;
 cin>>m>>n;
 Swap(i,j);
 Swap(m,n);
 cout<<i<<' '<<j<<'\n';
 cout<<m <<' '<<n<<endl;
 return 0;
}

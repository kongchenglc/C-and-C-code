#include <iostream> 
using namespace std; 
// ���ύ�Ĵ��뽫Ƕ�뵽����

class X{
public:
    X() { p = new int[2]; cout << "X().    "; }
    virtual ~X() { delete [] p; cout << "~X().\n"; }
private:
    int* p;
}; 


class Y : public X
{
public:
   Y( ) { q = new int[1023]; cout << "Y( )    "; }
   ~Y( ) { delete [] q; cout << "~Y().    "; }
private:
   int* q;
};
int main()
{
  int n;
  cin>>n; 
  for (int i = 0; i < n; i++)
  {
    X* r = new Y;
    delete r;
  }
  return 0;
}

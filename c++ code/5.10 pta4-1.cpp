//#include <iostream>
//using namespace std;
//const int SIZE = 10;
//
//class safearay
//{
//   private:
//      int arr[SIZE];
//   public:
//      safearay() 
//      {
//         register int i;
//         for(i = 0; i < SIZE; i++)
//         {
//           arr[i] = i;
//         }
//      }
//      int& operator[](int i)
//      {
//          if( i > SIZE )
//          {
//              cout << "索引超过最大值" <<endl; 
//              // 返回第一个元素
//              return arr[0];
//          }
//          return arr[i];
//      }
//};
//int main()
//{
//   safearay A;
//
//   cout << "A[2] 的值为 : " << A[2] <<endl;
//   cout << "A[5] 的值为 : " << A[5]<<endl;
//   cout << "A[12] 的值为 : " << A[12]<<endl;
//
//   return 0;
//}

#include <iostream>
#include <cstdlib>
using namespace std;
const int SIZE = 3;

class atype {
    int a[SIZE];
public:
   atype( ) {
       register int i;
       for(i=0; i<SIZE; i++) a[i] = i;
  }
  int &operator[](int i);
};
int &atype::operator[](int i)
      {
          if( i >= SIZE )
          {
              cout <<endl<<"Index value of "<<i<<" is out-of-bounds." <<endl; 
              // 返回第一个元素
              return a[0];
          }
          return a[i];
      }


int main( )
{
   atype ob;
   cin >> ob[1];  
   ob[2] = ob[1]; 
   cout << ob[2];  
   ob[3] = 44; 
   return 0;
}


#include <iostream>
#include <string>
using namespace std;
// ���ύ�Ĵ��뽫Ƕ�뵽����

const int SIZE=100;
//����������
template<class T> class Queue {    
  T q[SIZE];
  int front;  //����ͷ
  int rear;   //����β
public:
  Queue( ) 
  { front = rear = 0; }
  void put(T i){
  	q[rear]=i;
	rear++;
  } // �ڶ�β����һ������
  T get(){
	front++;
	return q[front-1];
	}
};


int main()
{
  Queue<int> a; // ����һ����������
  int m,n;
  cin>>m>>n; 
  a.put(m);
  a.put(n);
  cout << a.get() << " ";
  cout << a.get() << endl;

  Queue<double> d; // ����һ��˫���ȸ���������
  double x,y;
  cin>>x>>y;
  d.put(x);
  d.put(y);
  cout << d.get() << " ";
  cout << d.get() << endl;

  Queue<string> qs;// ����һ���ַ�������
  string s1,s2,s3;
  cin>>s1>>s2>>s3;
  qs.put(s1);
  qs.put(s2);
  qs.put(s3);
  cout <<				qs.get() << " ";
  cout <<				qs.get() << " ";
  cout << qs.get() << endl;

  return 0;
}

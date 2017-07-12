
#include <iostream>
#include <string>
using namespace std;
// 你提交的代码将嵌入到这里

const int SIZE=100;
//整数队列类
template<class T> class Queue {    
  T q[SIZE];
  int front;  //队列头
  int rear;   //队列尾
public:
  Queue( ) 
  { front = rear = 0; }
  void put(T i){
  	q[rear]=i;
	rear++;
  } // 在队尾放置一个数据
  T get(){
	front++;
	return q[front-1];
	}
};


int main()
{
  Queue<int> a; // 创建一个整数队列
  int m,n;
  cin>>m>>n; 
  a.put(m);
  a.put(n);
  cout << a.get() << " ";
  cout << a.get() << endl;

  Queue<double> d; // 创建一个双精度浮点数队列
  double x,y;
  cin>>x>>y;
  d.put(x);
  d.put(y);
  cout << d.get() << " ";
  cout << d.get() << endl;

  Queue<string> qs;// 创建一个字符串队列
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

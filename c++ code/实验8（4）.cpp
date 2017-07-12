#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;
const int SIZE = 90;
template <class T> class Stack
{
	public:
		Stack();
		void push(T n);
		T pop();
		void print();
	private:
		T stack[SIZE];
		int tos;
};
template <class T>
Stack<T>::Stack():tos(0){}
template <class T>
void Stack<T>::print()
{
	int i;
	for(i=0;i<tos;i++)
	{
		cout<<stack[i]<<" ";
	}
	cout<<"\n";
}
template <class T>
void Stack<T>::push(T n)
{
	stack[tos++]=n;
}
template <class T>
T Stack<T>::pop()
{
	return stack[tos--]; 
}
int main()
{
	Stack <char> arr;
	arr.push('f');
	arr.push('a');
	arr.pop();
	arr.print();
}

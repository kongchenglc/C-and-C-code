#include <iostream>
#include <stdio.h>
using namespace std;
class Complex {
public:
 Complex (int r=0, int i=0) : m_r (r), m_i (i) {}
 void print (void) const {
  cout << m_r << '+' << m_i << 'i' << endl;
 }
 const Complex operator+ (const Complex& c) const {
  return Complex (m_r + c.m_r, m_i + c.m_i);
 }
 private:
 int m_r; 
 int m_i; 
 
};
int main (void) {
    int r,i;
    cin>>r;
	while(1)
	{
		if(r==0)
		{
			break;
		}
		scanf("+%di",&i);
		//printf("    %d    %d\n",r,i);
		cin>>r;
		Complex c1(r,i);
	 }
	 
 return 0;
}

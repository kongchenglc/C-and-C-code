#include <stdio.h>
int taijie1(int n)              /*青蛙一次可以上1阶或两阶*/ 
{
	if(n==1)
	{
		return 1;
	}
	if(n==2)
	{
		return 2;
	}
	if(n>2)
	{
		return taijie1(n-1)+taijie1(n-2);
	}
 } 

int taijie2(int n)          /*青蛙可以一次上n阶*/ 
{
	if(n==1)
	{
		return 1;
	}
	if(n>=2)
	{
		return 2*taijie2(n-1);
	}
}


int main()
{
	int n;
	scanf("%d",&n);
	printf("有%d种跳法",taijie1(n));
}
 

#include <stdio.h>
int taijie1(int n)              /*����һ�ο�����1�׻�����*/ 
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

int taijie2(int n)          /*���ܿ���һ����n��*/ 
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
	printf("��%d������",taijie1(n));
}
 

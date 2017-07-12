#include <stdio.h>
void main()
{
/*	int *p,*q,t,a[5]={1,2,1,3,8};
	for(p=a;p<a+4;p++)
	{
		for(q=p+1;q<a+5;q++)
		{
			if(*p<*q)
			{
				t=*p;
				*p=*q;
				*q=t;
			}
		}
	}
	for(t=0;t<5;t++)
		printf("%3d",a[t]);
*/
	int i,j,t,a[5]={1,2,1,3,8};
	for(i=0;i<4;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(a[i]<a[j])
			{
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
	}
	for(t=0;t<5;t++)
		printf("%3d",a[t]);
}

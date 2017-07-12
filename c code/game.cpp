#include <stdio.h>
#include <stdlib.h>
int Count=1;
typedef struct child
{
	int N;
	struct child *next;
}Child;
Child *creat(int n)
{
	Child *Head,*New,*End;
	New=End=(Child*)malloc(sizeof(Child));
	Head=End;
	Head->N=Count;
	Head->next=NULL;
	while(Count<n)
	{
		Count++;
		New=(Child*)malloc(sizeof(Child));
		New->N=Count;
		New->next=NULL;
		End->next=New;
		End=New;
	}
	End->next=Head;
	return Head;
}
int Xuanze(Child *Head,int m)
{
	int i;
	Child *p=Head,*q;
	while(Count!=1)
	{
	    for(i=1;i<m-1;i++)
	    {
	    	p=p->next;
		}
		q=p->next;
		p->next=p->next->next;
		free(q);
		Count--;
		p=p->next;
	}
	return (p->N);
}
int main()
{
	int n,m,x;
	Child *Head;
	printf("请输入游戏人数和所报的数：\n");
	scanf("%d %d",&n,&m);
	Head=creat(n);
	x=Xuanze(Head,m);
	printf("中奖的孩子是第%d个\n",x);
}

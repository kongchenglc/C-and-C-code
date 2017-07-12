#include<stdio.h>
#include<stdlib.h>

typedef struct child
{
	int number;
	struct child *Next;	
}child;

child *creat(int n)
{
	int i=1;
	child *Head,*New,*End;
	Head=End=(child*)malloc(sizeof(child));
	Head->number=1;
	i++;
	New=(child*)malloc(sizeof(child));
	while(i<=n)
	{
		End->Next=New;
		End=New;
		End->Next=NULL;
		End->number=i;
		New=(child*)malloc(sizeof(child));
		i++;
	}
	free(New);
	End->Next=Head;
	return Head;
}

void shanchu(child *Head)
{
	int i,m;
	child *p=Head;
	printf("输入报数m：\n");
	scanf("%d",&m);
	while(p->Next!=p)
	{
		for(i=1;i<m-1;i++)
		{
			p=p->Next;
		}
		p->Next=p->Next->Next;
		p=p->Next;
	}
	printf("获得奖品小朋友编号为%d",p->number);
}

int main()
{
	int n;
	child *Head;
	printf("请输入人数n：\n");
	scanf("%d",&n);
	Head=creat(n);
	shanchu(Head);
}

#include <stdio.h>
#include <stdlib.h>
int n;
typedef struct student
{
	char Name[20];
	int Number;
	struct student *llink,*rlink;
}A;
A *creat(int n)
{
	int i;
	A *Head,*End,*New;
	Head=End=(A*)malloc(sizeof(A));
	Head->Name[0]='\0';
	Head->rlink=NULL;
	Head->llink=NULL;
	for(i=0;i<n;i++)
	{
		New=(A*)malloc(sizeof(A));
		End->rlink=New;
		printf("请输入第%d个学生的姓名和学号：\n",i+1);
		scanf("%s",New->Name);
		scanf("%d",&New->Number);
	    New->llink=End;
		New->rlink=NULL;
		End=New;
	}
	End->rlink=Head;
	Head->llink=End;
	return Head;
}
void search(A *Head)
{
	A *p;
	int x;
	printf("请输入要找的人的学号：\n");
	scanf("%d",&x);
	p=Head->rlink;
	while(p!=Head)
	{
		if(p->Number==x)
		{
			printf("你要找的人的姓名：%s\n",p->Name);
		}
		p=p->rlink;
	}
}
int Inset(A *Head)
{
	A *p,*E;
	int x,i; 
	p=(A*)malloc(sizeof(A));
	printf("插入的位置为：\n");
	scanf("%d",&x);
	printf("输入插入的学生姓名的学号：\n");
	scanf("%s",p->Name);
	scanf("%d",&p->Number);
	E=Head;
	for(i=1;i<n+1;i++)
	{
		if(x==i)
		{
			p->rlink=E->rlink;
			E->rlink->llink=p;
			E->rlink=p;
			p->llink=E;
			n++;
			return 0;
		}
		else E=E->rlink;
	}
}
int Delete(A *Head)
{
	A *p;
	int x,i;
	printf("请输入删除的数的位置：\n");
	scanf("%d",&x);
	p=Head;
	for(i=0;i<n;i++)
	{
		if(i==x)
		{
			p->rlink->rlink->llink=p;
			p->rlink=p->rlink->rlink;
			return 0;
		}
		p=p->rlink;
	}
}
int main()
{
	A *p;
	printf("请输入总人数：\n");
	scanf("%d",&n);
	p=creat(n);
	search(p);
	Inset(p);
	Delete(p);
	search(p);
}

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define N 10
typedef struct student
{
	char Name[20];
	struct student *llink,*rlink;
}A;
A *creat(int n)
{
	A *h,*p,*s;
	int i;
	h=(A*)malloc(sizeof(A));
	h->Name[0]='\0';
	h->llink=NULL;
	h->rlink=NULL;
	p=h;
	for(i=0;i<n;i++)
	{
		s=(A*)malloc(sizeof(A));
		p->rlink=s;
		printf("�������%d���˵�������\n",i+1);
		scanf("%s",s->Name);
		s->llink=p;
		s->rlink=NULL;
		p=s;
	}
	h->llink=s;
	p->rlink=h;
	return h;
}
A *search(A *h,char *x)
{
	A *p;
	char *y;
	p=h->rlink;
	while(p!=h)
	{
		y=p->Name;
		if(strcmp(y,x)==0)
		    return p;
		else 
		    p=p->rlink;
	}
	printf("û�в��ҵ������ݣ�\n");
}
void print(A *h)
{
	int n;
	A *p;
	p=h->rlink;
	printf("������ϢΪ��\n");
	while(p!=h)
	{
		printf("%s\n",p->Name);
		p=p->rlink;
	}
	printf("\n");
}
int main()
{
	int number;
	char studname[20];
	A *head,*searchpoint;
	number=N;
	head=creat(number);
	print(head);
	printf("��������Ҫ���ҵ�������\n");
	scanf("%s",studname);
	searchpoint=search(head,studname);
	printf("����Ҫ���ҵ��˵������ǣ�%s",searchpoint->Name);
}

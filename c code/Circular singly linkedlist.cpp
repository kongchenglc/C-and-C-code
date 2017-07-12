#include<stdio.h>
#include<stdlib.h>
typedef struct student
{
	int Number;
	char Name[20];
	struct student *next;
}A;
int n=0;
A *create()
{
	A *Head=NULL;
	A *New,*End;
	New=End=(A*)malloc(sizeof(A));
	printf("输入姓名和学号:\n"); 
	scanf("%s",New->Name);
	scanf("%d",&New->Number);
	while(New->Number!=0)
	{
		n++;
		if(n==1)
		{
			Head=New;
			End=New;
			New->next=Head;
		}
		else
		{
			New->next=Head;
			End->next=New;
			End=New;
		}
		New=(A*)malloc(sizeof(A));
     	scanf("%s",New->Name);
    	scanf("%d",&New->Number);
	}
	free(New);
	return Head;
}
void print(A *Head)
{
	int i;
	A *p;
	p=Head;
	for(i=0;i<n;i++)
	{
		printf("%s\n",p->Name);
	    printf("%d\n\n",p->Number);
	    p=p->next;
	}
}
main()
{
	A *s;
	s=create();
	print(s);
}

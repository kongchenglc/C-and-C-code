#include<stdio.h>
#include<stdlib.h>
#include<windows.h> 
typedef struct student
{
	int data;
	struct student *next;
}Node;

Node *create()
{
	Node *Head,*End,*New;
	Head=(Node*)malloc(sizeof(Node));
	End=New=(Node*)malloc(sizeof(Node));
	Head->next=End;
	End->next=NULL;
	scanf("%d",&New->data);
	while(New->data!=0)
	{
		End->next=New;
		End=New;
		End->next=NULL;
		New=(Node*)malloc(sizeof(Node));
		scanf("%d",&New->data);
	}
	free(New);
	return Head;
}

Node *paixu1(Node *Head)                   /*≤Â»Î≈≈–Ú1*/
{
	Node *p1,*prep1,*p2,*prep2,*temp;
	if(Head->next->next==NULL)
	{
		return Head;
	}
	for(p1=Head->next->next,prep1=Head->next;p1!=NULL;p1=p1->next,prep1=prep1->next)
	{
		temp=p1;
		for(p2=Head->next,prep2=Head;p2!=p1;p2=p2->next,prep2=prep2->next)
		{
			if(p2->data>p1->data)
			{
				p1=p1->next;
				prep1->next=p1;
				prep2->next=temp;
				temp->next=p2;
				p1=prep1;
				while(temp->next!=p1)
				{
					temp=temp->next;
				}
				prep1=temp;
				break;
			}
		}
	}
	return Head;
}

void *paixu2(Node *Head)    /*error*/
{
	Node *q,*p,*prep;
	if(Head->next==NULL)
	{
		return 0;
	}
	prep=Head->next->next;
	if(prep!=NULL)
	{
		q=Head;
		q->next->next=NULL;
		while(prep!=NULL)
		{
		    p=prep->next;
			while(q->next!=NULL&&q->next->data<prep->data)
		    {
			    q=q->next;
		    }
		    prep->next=q->next;
		    q->next=prep;
		    prep=p;
	    }
	}
	 
	
}

void print(Node *Head)
{
	Node *p;
	p=Head->next;
	while(p!=NULL)
	{
		printf("%d\t",p->data);
		p=p->next;
	}
	printf("\n");
}

int main()
{
	Node *Head;
	Head=create();
	system("cls");
	printf("≈≈–Ú«∞£∫\n");
	print(Head);
	paixu1(Head);
	printf("≈≈–Ú∫Û£∫\n");
	print(Head);
}

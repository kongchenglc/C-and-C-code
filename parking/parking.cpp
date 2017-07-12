/*ͣ����  ����ϵͳ*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <conio.h>
 
#define MAX 8                                   /*��λ����*/
#define prince 0.2                              /*�շ�:Ԫ/����*/

typedef struct park                             /*�ṹ��*/ 
{
	int Number;                                 /*��λ��*/
	int Have;                                   /*�Ƿ��г�*/
	char CarNumber[20];                         /*���ƺ�*/
	char Name[20];                              /*��������*/ 
	char sex[10];                               /*�����Ա�*/
	char PhoneNumber[20];                       /*�����绰*/
	time_t StartTime;                           /*���ʱ��*/
	time_t LastTime;                            /*����ʱ��*/
	struct park *Next;                          
}Park;

void zhu_xianshi();
void zhu_shuru();
void daoda_xianshi();
void daoda_shuru();
void xuanzechewei_xianshi();
int xuanzechewei_shuru();
void save_file(Park *Head);
void *start_file();
Park *read_file();
void likai_xianshi();
void likai_shuru();
void likaixuanzechewei_xianshi();
int likaixuanzechewei_shuru();
void likaiqueren_xianshi(Park *p);
void likaiqueren_shuru(Park *p);
void qingchuxinxi(Park *p);
void denglu_xianshi();
void denglu_shuru();
void mima_xianshi();
void mima_shuru();
void mima_chuangjian_file();
void guanli_xianshi();
void guanli_shuru();
void mima_save_file();
void quanxinxi_paixu();
void chaxun_tongji_xianshi();
void chaxun_tongji_shuru();
void xingbie_tongji_print();
void chaxun_chepaihao();

void print(Park *Head);
 

Park *creat()                            /*������*/
{
	int i=1;
	Park *Head,*New,*End;
	Head=End=(Park*)malloc(sizeof(Park));
	New=(Park*)malloc(sizeof(Park));
	while(i<=MAX)
	{
		End->Next=New;
		End=New;
		End->Next=NULL;
		End->Number=i;
		End->Have=0;
		strcpy(End->CarNumber,"\0");
		strcpy(End->Name,"\0");
		strcpy(End->PhoneNumber,"\0");
		strcpy(End->sex,"\0");
		End->LastTime=0;
		End->StartTime=0;
		
		New=(Park*)malloc(sizeof(Park));
		i++;
	}
	free(New);
	return Head;
}

void zhu_xianshi()                      /*��������ʾ����*/
{
	int HAVE=0,n;
	Park *p,*Head;
    Head=read_file();
	p=Head->Next;
	while(p!=NULL)
	{
		HAVE+=p->Have;
		p=p->Next;
	}
	printf("\n\n\n");
	printf("\t\t****************************************\n");
	printf("\t\t*******   ��ӭ����ͣ������ϵͳ   *******\n");
	printf("\t\t****************************************\n");
	printf("\t\t**************   ���˵�   **************\n");
	printf("\t\t****\t       1.��������           ****\n");
	printf("\t\t****\t       2.��������           ****\n");
	printf("\t\t****\t       3.������Ա           ****\n");
	printf("\t\t****\t       4.�˳�ϵͳ           ****\n");
	printf("\t\t****************************************\n");
	printf("\t\t************   ͣ������Ϣ   ************\n");
	printf("\t\t****\t    ���г�λ��%3d  ��       ****\n",MAX);
	printf("\t\t****\t    ���г�λ��%3d  ��       ****\n",MAX-HAVE);
	printf("\t\t****\t    �շѱ�׼��%.1fԪ/����    ****\n",prince);
	printf("\t\t****************************************\n");
	printf("\t\t****************************************\n");
}

void zhu_shuru()                        /*���������뺯��*/  
{
	char n;static int x=0;
    int HAVE=0;
	Park *p,*Head;
	Head=read_file();
	p=Head->Next;
	while(p!=NULL)
	{
		HAVE+=p->Have;
		p=p->Next;
	}
	if(x==0)
	{
		printf("\t\t��ѡ��ѡ�");
	}
	x++;
	fflush(stdin);
	n=getch();
	system("cls");
	if((n>='1')&&(n<='4'))
	{
		switch(n)
        {
        	case '1':
    		{
    			x=0;
    			if(MAX>HAVE)
    			{ 
    				daoda_xianshi();
    				daoda_shuru();
    			}
    			else
    			{
				    zhu_xianshi();
				    printf("\t\t�Բ��𣬳�λ������\n");
				    getch();
				    system("cls");
				    zhu_xianshi();
				    zhu_shuru();
      			}
      			break;
    		}
        	case '2':
			{
				x=0;
				if(HAVE==0)
				{
				    zhu_xianshi();
					printf("\t\t�Բ��𣬳������޳�����\n");	
				    getch();
				    system("cls");
				    zhu_xianshi();
				    zhu_shuru();					
				} 
				else
				{
					likai_xianshi();
					likai_shuru(); 
				}
				break;
			}
        	case '3':
        	{
        		x=0;
				denglu_xianshi();
			    denglu_shuru();
			    break;
		    } 
         	case '4':exit(0);
        	default:break;
        }
	}
	else
	{
		zhu_xianshi();
	    printf("\t\t����������������룺");
		zhu_shuru();
	}
}

void daoda_xianshi()                         /*������ʾ����*/ 
{
	printf("\n\n\n"); 
	printf("\t\t****************************************\n");
	printf("\t\t*******      �����복����Ϣ      *******\n");
	printf("\t\t****************************************\n");
	printf("\t\t**************    �˵�    **************\n");
	printf("\t\t****\t       1.������Ϣ           ****\n");
	printf("\t\t****\t      --ѡ��λ--          ****\n");
	printf("\t\t****\t      --�����ƺ�--          ****\n");
	printf("\t\t****\t      --��������--          ****\n");
	printf("\t\t****\t      --�����绰--          ****\n");
	printf("\t\t****\t       2.�����ϲ�           ****\n");
	printf("\t\t****\t       3.�˳�ϵͳ           ****\n");
	printf("\t\t****************************************\n");
	printf("\t\t****************************************\n");
} 

void daoda_shuru()                           /*�������뺯��*/
{
	char n;
	static int x=0;
	Park *p;
	int m;
	Park *Head;
	Head=read_file();
	p=Head->Next;
	if(x==0)
	{
		printf("\t\t��ѡ��ѡ�");
	}
	x++;
	fflush(stdin);
	n=getch();
	system("cls");
	if((n>='1')&&(n<='3'))
	{
    	switch(n)
    	{
    		case '1':
    		{
    			x=0;
    			xuanzechewei_xianshi();
    			m=xuanzechewei_shuru();
     			break;
    		}
    		case '2':
    		{
    			x=0;
				zhu_xianshi();
				zhu_shuru();	
			}
    		case '3':
       		{
    			exit(0);
	    	}
	    	default:break;
    	}
    	for(p=Head->Next;p!=NULL;p=p->Next)
    	{
    		if(p->Number==m)
    		break;
		}
    	daoda_xianshi();
    	printf("\t\t�����복�ƺţ�");
    	fflush(stdin);
    	scanf("%s",p->CarNumber);
		printf("\t\t����������������");
		fflush(stdin);
		scanf("%s",p->Name);
		printf("\t\t�����������Ա�");
		fflush(stdin);
		scanf("%s",p->sex);
		printf("\t\t��������ϵ�绰��"); 
		fflush(stdin);
		scanf("%s",p->PhoneNumber);
		printf("\t\t****************************************\n");
		printf("\t\t****\t     �������ȷ����Ϣ       ****\n");
		printf("\t\t****************************************\n");
		getch();
		p->Have=1;
		p->StartTime=time(NULL);
		save_file(Head);
		system("cls");
		zhu_xianshi();
		zhu_shuru();
	}
	else
	{
		daoda_xianshi();
	    printf("\t\t����������������룺");
	    daoda_shuru();
	}
}     


void likai_xianshi()
{
	printf("\n\n\n"); 
	printf("\t\t****************************************\n");
	printf("\t\t*******      ��ѡ������Ϣ      *******\n");
	printf("\t\t****************************************\n");
	printf("\t\t**************    �˵�    **************\n");
	printf("\t\t****\t       1.��λ���           ****\n");
	printf("\t\t****\t       2.�����ϲ�           ****\n");
	printf("\t\t****\t       3.�˳�ϵͳ           ****\n");
	printf("\t\t****************************************\n");
	printf("\t\t****************************************\n");
}



void likai_shuru()
{
	char n;
	static int x=0;
	Park *p;
	int m;
	Park *Head;
	Head=read_file();
	p=Head->Next;
	if(x==0)
	{
		printf("\t\t��ѡ��ѡ�");
	}
	x++;
	fflush(stdin);
	n=getch();
	system("cls");
	if((n>='1')&&(n<='3'))
	{
    	switch(n)
    	{
    		case '1':
    		{
    			x=0;
    			likaixuanzechewei_xianshi();
    			m=likaixuanzechewei_shuru();
     			break;
    		}
    		case '2':
    		{
    			x=0;
    			system("cls");
				zhu_xianshi();
				zhu_shuru();	
			}
    		case '3':
       		{
    			exit(0);
	    	}
	    	default:break;
    	}
        for(p=Head->Next;p!=NULL;p=p->Next)
    	{
    		if(p->Number==m)
    		break;
		}
		likaiqueren_xianshi(p);
		likaiqueren_shuru(p);
		zhu_xianshi();
		zhu_shuru();
	}
	else
	{
		likai_xianshi();
	    printf("\t\t����������������룺");
	    likai_shuru();
	}
}      


void likaiqueren_xianshi(Park *p)
{
     	printf("\n\n\n");
	    printf("\t\t****************************************\n");
	    printf("\t\t****\t      ��˶Գ�����Ϣ        ****\n");
	    printf("\t\t****************************************\n");
		printf("\t\t����������%s\n",p->Name);
		printf("\t\t���ƺţ�%s\n",p->CarNumber);
     	printf("\t\t****************************************\n");
     	printf("\t\t****\t     1.��Ϣ�˶���ȷ         ****\n");
     	printf("\t\t****\t     2.������һ��           ****\n");  
		printf("\t\t****************************************\n");
}

void likaiqueren_shuru(Park *p)
{
	Park *Head,*q;
	double cost;
	char n;
	static int x=0;
	Head=read_file();
	if(x==0)
	{
		printf("\t\t��ѡ��ѡ�");
	}
	x++;
	fflush(stdin);
	n=getch();
	system("cls");
	if((n>='1')&&(n<='2'))
	{
    	switch(n)
    	{
    		case '1':
    		{
    			x=0;
    			p->LastTime=time(NULL);
    			cost=difftime(p->LastTime,p->StartTime);
    			likaiqueren_xianshi(p);
         		printf("\t\t****\t    �������ѽ��%5.1lfԪ     ****\n",cost/60*0.2);
         		printf("\t\t****************************************\n");
         		printf("\t\t****\t       ��ӭ�´ι���         ****\n");
         		printf("\t\t****************************************\n");
         		printf("\t\t****************************************\n");
         		getch();
         		for(q=Head->Next;q!=NULL;q=q->Next)
            	{
            		if(q->Number==p->Number)
            		break;
	         	}
	         	qingchuxinxi(q);
         		save_file(Head);
             	system("cls");
         		zhu_xianshi();
         		zhu_shuru();
       	    	break;
    		}
    		case '2':
       		{
       			x=0;
    			likai_xianshi();
    			likai_shuru();
    			break;
	    	}
	    	default:break;
     	}
	}
	else
	{
		likaiqueren_xianshi(p);
	    printf("\t\t����������������룺");
	    likaiqueren_shuru(p);
	}
	
	
	
}

void qingchuxinxi(Park *p)
{
		p->Have=0;
		strcmp(p->CarNumber,"\0");
		strcmp(p->Name,"\0");
		strcmp(p->PhoneNumber,"\0");
		p->LastTime=0;
		p->StartTime=0;
}

void likaixuanzechewei_xianshi()
{
	char n;Park *p;
	Park *Head;
	Head=read_file();
	printf("\n\n\n");
	printf("\t\t****************************************\n");
	printf("\t\t*******      ��ѡ��λ���      *******\n");
	printf("\t\t****************************************\n");
	printf("\t\t**************    �˵�    **************\n");
	for(p=Head->Next;p!=NULL;p=p->Next)
	{	
		if(p->Have!=0)
		{
			printf("\t\t****\t      %2d.�ͻ�����           ****\n",p->Number);
		}
		else
		{
			printf("\t\t****\t      %2d.�������           ****\n",p->Number);
		}
	}
	printf("\t\t****************************************\n");
}

int likaixuanzechewei_shuru()
{
	char n;Park *p;static int x=0;
	Park *Head;
	Head=read_file();
	if(x==0)
	{
		printf("\t\t��ѡ��λ��");
	}
	x++;
	fflush(stdin);
	n=getch();
	system("cls");
	if((n>='1')&&(n<=MAX+48))
	{
    	for(p=Head->Next;p!=NULL;p=p->Next)
    	{
    		if(p->Number==(n-48)&&p->Have!=0)
    		{
    			x=0;
    			return n-48;
			}
			else if(p->Number==(n-48))
			{
				likaixuanzechewei_xianshi();
				printf("\t\t��λ�޳���������ѡ��");
			    return	likaixuanzechewei_shuru();
			}
    	}
	}
	else
	{
		likaixuanzechewei_xianshi();
	    printf("\t\t����������������룺");
	    return	likaixuanzechewei_shuru();
	}
}

void xuanzechewei_xianshi()                          /*ѡ��λ��ʾ����*/
{
	char n;Park *p;
	Park *Head;
	Head=read_file();
	printf("\n\n\n"); 
	printf("\t\t****************************************\n");
	printf("\t\t*******      ��ѡ��λ���      *******\n");
	printf("\t\t****************************************\n");
	printf("\t\t**************    �˵�    **************\n");
	for(p=Head->Next;p!=NULL;p=p->Next)
	{	
		if(p->Have!=0)
		{
			printf("\t\t****\t      %2d.������ռ           ****\n",p->Number);
		}
		else
		{
			printf("\t\t****\t      %2d.�������           ****\n",p->Number);
		}
	}
	printf("\t\t****************************************\n");
}

int xuanzechewei_shuru()                           /*ѡ��λ���뺯��*/
{
	char n;Park *p;static int x=0;
	Park *Head;
	Head=read_file();
	if(x==0)
	{
		printf("\t\t��ѡ��λ��");
	}
	x++;
	fflush(stdin);
	n=getch();
	system("cls");
	if((n>='1')&&(n<=MAX+48))
	{
    	for(p=Head->Next;p!=NULL;p=p->Next)
    	{
    		if(p->Number==(n-48)&&p->Have==0)
    		{
    			x=0;
    			return n-48;
			}
			else if(p->Number==(n-48))
			{
				xuanzechewei_xianshi();
				printf("\t\t��λ��ռ��������ѡ��");
				xuanzechewei_shuru();
			}
		}
    	
	}
	else
	{
		xuanzechewei_xianshi();
	    printf("\t\t����������������룺");
		xuanzechewei_shuru();
	}
}             

void save_file(Park *Head)
{
	FILE *fp;
	Park *p;
	if((fp=fopen("keshe1.txt","w+"))==NULL)
	{
		printf("\t\t����ʧ�ܣ�");
		getch();
		exit(1);
	}
    for(p=Head->Next;p!=NULL;p=p->Next)
    {
    	fwrite(p,sizeof(Park),1,fp);
	}
	fclose(fp);
}

Park *read_file()
{
	Park *Head,*New,*End;
	int i=0; 
	FILE *fp;
	if((fp=fopen("keshe1.txt","r"))==NULL)
	{
		printf("����ʧ�ܣ�");
		getch();
		exit(1);
	}
	else
	{
		Head=End=(Park*)malloc(sizeof(Park));
		New=(Park*)malloc(sizeof(Park));
		while(i<MAX)
		{
			End->Next=New;
	    	End=New;
	    	End->Next=NULL;
	    	fread(End,sizeof(Park),1,fp);
	    	New=(Park*)malloc(sizeof(Park));
	    	i++;
		}
		free(New);
	}
	fclose(fp);
	return Head;
}

void denglu_xianshi()
{
	printf("\n\n\n"); 
	printf("\t\t****************************************\n");
	printf("\t\t*******      ����Ա��½����      *******\n");
	printf("\t\t****************************************\n");
	printf("\t\t****\t     1.����Ա��¼           ****\n");
	printf("\t\t****\t     2.������һ��           ****\n");
	printf("\t\t****\t     3.�˳���ϵͳ           ****\n");
	printf("\t\t****************************************\n");
}

void denglu_shuru()
{
	char n;
	static int x=0;
	if(x==0)
	{
		printf("\t\t��ѡ��ѡ�");
	}
	x++;
	fflush(stdin);
	n=getch();
	system("cls");
	if((n>='1')&&(n<='3'))
	{
    	switch(n)
    	{
    		case '1':
    		{
    			x=0;
    			mima_xianshi();
    		    mima_shuru();
     			break;
    		}
    		case '2':
    		{
    			x=0;
				zhu_xianshi();
				zhu_shuru();	
			}
    		case '3':
       		{
    			exit(0);
	    	}
	    	default:break;
    	}
   }
   else
	{
		denglu_xianshi();
	    printf("\t\t����������������룺");
	    denglu_shuru();
	}
}


void mima_xianshi()
{
	printf("\n\n\n"); 
	printf("\t\t****************************************\n");
	printf("\t\t*******      ����Ա��½����      *******\n");
	printf("\t\t****************************************\n");
	printf("\t\t��ʼ����Ϊ��000000\n");
}

void mima_chuangjian_file()
{
	char b[6]={'0','0','0','0','0','0'};
	FILE *fp;
	int i;
	for(i=0;i<6;i++)
	{
		b[i]=b[i]+i;
	}
	if((fp=fopen("mima1.txt","w+"))==NULL)
	{
		printf("\t\t����ʧ�ܣ�");
		getch();
		exit(1);
	}
    fwrite(b,sizeof(char),6,fp);
	fclose(fp);
}

void mima_shuru()
{
	char a[6],b[6];
	int i;
	static int x=0;
	FILE *fp;
	if(x==0)
	{
		printf("\t\t��������λ���룺");
	}
	x++;
	if((fp=fopen("mima1.txt","r+"))==NULL)
	{
		mima_chuangjian_file();
		fp=fopen("mima1.txt","r+");
	}
	fread(b,sizeof(char),6,fp);
	for(i=0;i<6;i++)
	{
		b[i]=b[i]-i;
	}
	for(i=0;i<6;i++)
	{
		a[i]=getch();
		printf("*");
	}
	system("cls");
	if(strcmp(a,b)==0)
	{
		x=0;
		guanli_xianshi();
		guanli_shuru();
	}
	else
	{
		mima_xianshi();
		printf("\t\t����������������룺");
		mima_shuru();
	}
}

void chaxun_tongji_xianshi()
{
	printf("\n\n\n"); 
	printf("\t\t****************************************\n");
	printf("\t\t*******      ��ѯ��ͳ�ƽ���      *******\n");
	printf("\t\t****************************************\n");
	printf("\t\t**************    �˵�    **************\n");
	printf("\t\t****\t     1.�����ƺŲ�ѯ         ****\n");
	printf("\t\t****\t     2.�����Ա�ͳ��         ****\n");
	printf("\t\t****\t     3.���ع������         ****\n");
	printf("\t\t****************************************\n");
	printf("\t\t****************************************\n");
}

void chaxun_tongji_shuru()
{
	char n;
	static int x=0;
	if(x==0)
	{
		printf("\t\t��ѡ��ѡ�");
	}
	x++;
	fflush(stdin);
	n=getch();
	system("cls");
	if((n>='1')&&(n<='3'))
	{
    	switch(n)
    	{
    		case '1':
    		{
    			x=0;
                chaxun_chepaihao();
                getch();
    			system("cls");
    			chaxun_tongji_xianshi();
			    chaxun_tongji_shuru();
     			break;
    		}
    		case '2':
    		{
    			x=0;
    			xingbie_tongji_print();
    			getch();
    			system("cls");
    			chaxun_tongji_xianshi();
			    chaxun_tongji_shuru(); 
	            break;
			}
    		case '3':
       		{
       			x=0;
    			guanli_xianshi();
    			guanli_shuru();
    			break;
	    	}
	    	default:break;
    	}
   }
   else
	{
		denglu_xianshi();
	    printf("\t\t����������������룺");
	    denglu_shuru();
	}
}

void chaxun_chepaihao()
{
	Park *p,*Head;
	char a[20];
	int x=0;
	Head=read_file();
	p=Head->Next;
	printf("\n\n\n\t\t������Ҫ��ѯ�ĳ��ƺţ�");
	scanf("%s",a);
	printf("\n");
	while(p)
	{
		if(p->Have==1&&strcmp(a,p->CarNumber)==0)
		{
    		printf("\t\t��λ��ţ�%d\n",p->Number);
       		printf("\t\t����������%s\n",p->Name);
    		printf("\t\t�����Ա�%s\n",p->sex);
    		printf("\t\t������ϵ�绰��%s\n",p->PhoneNumber);
     		printf("\t\t���복��ʱ�䣺%s\n",ctime(&p->StartTime));
    		x=1;
		}
		p=p->Next;
	}
	if(x==1)
	printf("\n\t\t��Ϣ�����������������ء�");
	else
	{
		printf("\n\t\tδ�ҵ��˳��ƺţ�����������ء�");
	}
}

void xingbie_tongji_print()
{
	Park *Head;
	Head=read_file();
	Park *p=Head->Next;
	int x=0,y=0;
	printf("\n\n\n\t\t��������˾����Ϣ���£�\n\n"); 
	while(p)
	{
		if((strcmp(p->sex,"��")==0)&&(p->Have==1))
		{
	    	printf("\t\t��λ��ţ�%d\n",p->Number);
     		printf("\t\t���ƺţ�%s\n",p->CarNumber);
	     	printf("\t\t����������%s\n",p->Name);
	    	printf("\t\t������ϵ�绰��%s\n",p->PhoneNumber);
            printf("\t\t���복��ʱ�䣺%s\n",ctime(&p->StartTime));
     		printf("\n");
     		x=1;
     	}
    	p=p->Next;
	}
	if(x==0)
	{
		printf("\t\t��\n");
	}
	p=Head->Next;
	printf("\n\n\t\t����Ů��˾����Ϣ���£�\n\n");
	while(p)
	{
		if((strcmp(p->sex,"Ů")==0)&&(p->Have==1))
		{
	    	printf("\t\t��λ��ţ�%d\n",p->Number);
     		printf("\t\t���ƺţ�%s\n",p->CarNumber);
	     	printf("\t\t����������%s\n",p->Name);
	    	printf("\t\t������ϵ�绰��%s\n",p->PhoneNumber);
            printf("\t\t���복��ʱ�䣺%s\n",ctime(&p->StartTime));
     		printf("\n");
     		y=1;
     	}
    	p=p->Next;
	}
	if(y==0)
	{
		printf("\t\t��\n\n");
	}
	if(x==1||y==1)
	{
		printf("\t\t������Ϣ�����ϣ�����������ء�\n");
	}
	else
	{
		printf("\t\t��Ϣ�գ�����������ء�\n");
	}
}

void guanli_xianshi()
{
	printf("\n\n\n"); 
	printf("\t\t****************************************\n");
	printf("\t\t*******     ��ӭ����������     *******\n");
	printf("\t\t****************************************\n");
	printf("\t\t**************    �˵�    **************\n");
	printf("\t\t****\t      1.ȫ��Ϣ�鿴          ****\n");
	printf("\t\t****\t      2.��ѯ��ͳ��          ****\n");
	printf("\t\t****\t      3.��ʼ������          ****\n");
	printf("\t\t****\t      4.����������          ****\n");
	printf("\t\t****\t      5.����������          ****\n");
	printf("\t\t****\t      6.�˳���ϵͳ          ****\n");
	printf("\t\t****************************************\n");
	printf("\t\t****************************************\n");
}

void guanli_shuru()
{
	char n;
	static int x=0;
	if(x==0)
	{
		printf("\t\t��ѡ��ѡ�");
	}
	x++;
	fflush(stdin);
	n=getch();
	system("cls");
	if((n>='1')&&(n<='6'))
	{
    	switch(n)
    	{
    		case '1':
    		{
    			x=0;
    			quanxinxi_paixu();
    			printf("\t\t������Ϣ�����ϣ�����������ء�\n");
    			getch();
    			system("cls");
    			guanli_xianshi();
			    guanli_shuru();
     			break;
    		}
    		case '2':
    	    {
    	    	x=0;
    	    	chaxun_tongji_xianshi();
    	    	chaxun_tongji_shuru();
    	    	break;
			}
    		case '3':
    		{
    			x=0;
    			printf("\n\n\n\n\n"); 
            	printf("\t\t****************************************\n");
             	printf("\t\t******* �����ȷ�ϳ�ʼ��������Ϣ *******\n");
             	printf("\t\t****************************************\n");
    			getch();
    			system("cls");
    			save_file(creat());
    			printf("\n\n\n\n\n"); 
            	printf("\t\t****************************************\n");
             	printf("\t\t*******      �������������      *******\n");
             	printf("\t\t****************************************\n");
    			getch();
    			system("cls");
    			zhu_xianshi();
    			zhu_shuru();
			    break;	
			}
    		case '4':
       		{
       			x=0;
       			printf("\n\n\n");
    			printf("\t\t��������λ�����룺");
				mima_save_file();
			    guanli_xianshi();
			    guanli_shuru();
				break; 
	    	}  
	    	case '5':
	    	{
	    		x=0;
	    		zhu_xianshi();
	    		zhu_shuru();
			}
			case '6':
			{
				exit(0);
			}
	    	default:break;
    	}
    }
    else
	{
		guanli_xianshi();
	    printf("\t\t����������������룺");
	    guanli_shuru();
	}
}

void quanxinxi_paixu()
{
	Park *Head,*p1,*prep1,*p2,*prep2,*temp;;
	Head=read_file();
	if(Head->Next->Next==NULL)
	{
		return;
	}
	for(p1=Head->Next->Next,prep1=Head->Next;p1!=NULL;p1=p1->Next,prep1=prep1->Next)
	{
		temp=p1;
		for(p2=Head->Next,prep2=Head;p2!=p1;p2=p2->Next,prep2=prep2->Next)
		{
			if(strcmp(p2->CarNumber,p1->CarNumber)<0)
			{
				p1=p1->Next;
				prep1->Next=p1;
				prep2->Next=temp;
				temp->Next=p2;
				p1=prep1;
				while(temp->Next!=p1)
				{
					temp=temp->Next;
				}
				prep1=temp;
				break;
			}
		}
	}	
	print(Head);
}

void mima_save_file()
{
	char a[6];
	int i;
	FILE *fp;
	for(i=0;i<6;i++)
	{
		a[i]=getch();
		printf("*");
	}
	for(i=0;i<6;i++)
	{
		a[i]=a[i]+i;
	}
	if((fp=fopen("mima1.txt","w+"))==NULL)
	{
		printf("\t\t����ʧ�ܣ�");
		getch();
		exit(1);
	}
    fwrite(a,sizeof(char),6,fp);
	fclose(fp);
	system("cls");
}


void print(Park *Head)
{
	Park *p=Head->Next;
	printf("\n\n\n\t\t���г�λ��Ϣ���£�\n\n"); 
	while(p)
	{
		printf("\t\t��λ��ţ�%d\n",p->Number);
		printf("\t\t���ƺţ�%s\n",p->CarNumber);
		printf("\t\t����������%s\n",p->Name);
		printf("\t\t�����Ա�%s\n",p->sex);
		printf("\t\t������ϵ�绰��%s\n",p->PhoneNumber);
		if(p->Have==1)
		{
			printf("\t\t���복��ʱ�䣺%s\n",ctime(&p->StartTime));
		}
		else
		{
			printf("\t\t���복��ʱ�䣺\n");
		}
		printf("\n");
		p=p->Next;
	}
}

void *start_file()
{
	Park *Head,*New,*End;
	FILE *fp;
	if((fp=fopen("keshe1.txt","r"))==NULL)
	{
		Head=creat();
		save_file(Head);
	}
	else
	{
		Head=End=(Park*)malloc(sizeof(Park));
		New=(Park*)malloc(sizeof(Park));
		while(!feof(fp))
		{
			End->Next=New;
	    	End=New;
	    	End->Next=NULL;
	    	fread(End,sizeof(Park),1,fp);
	    	New=(Park*)malloc(sizeof(Park));
		}
		free(New);
	}
	fclose(fp);
	return 0;
}


int main()                                            /*������*/
{
	start_file();
	//print(read_file()); 
	zhu_xianshi();
	zhu_shuru();
}

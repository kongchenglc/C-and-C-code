#include <stdio.h>
#include <stdlib.h>
#include <io.h>
#define LEN 100
int main()
{
	FILE *fp;
	char filename[LEN];
	int fno,fsize;
	printf("����Ҫ�򿪵��ļ�������·�������ļ�����\n");
	gets(filename);
	fp=fopen(filename,"r");
	if(fp==NULL)
	{
		printf("\n���ļ�ʧ�ܣ�%s���ܲ�����\n",filename);
		exit(1);
	}
	fno=fileno(fp);
	printf("%d",fno);
	fsize=filelength(fno);
	printf("\n%s�ļ��򿪳ɹ����ļ���С%d Bytes\n",filename,fsize);
	fclose(fp);
}

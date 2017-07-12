#include <stdio.h>
#include <stdlib.h>
#include <io.h>
#define LEN 100
int main()
{
	FILE *fp;
	char filename[LEN];
	int fno,fsize;
	printf("输入要打开的文件的完整路径及其文件名：\n");
	gets(filename);
	fp=fopen(filename,"r");
	if(fp==NULL)
	{
		printf("\n打开文件失败，%s可能不存在\n",filename);
		exit(1);
	}
	fno=fileno(fp);
	printf("%d",fno);
	fsize=filelength(fno);
	printf("\n%s文件打开成功，文件大小%d Bytes\n",filename,fsize);
	fclose(fp);
}

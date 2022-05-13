#include<stdio.h>
#include<stdlib.h>

int main()
{
	char ch,ch1;
	FILE *fp,*fp1;
	
	fp=fopen("demo.txt","r");
	fp=fopen("demo1.txt","w");
	
	if(fp == NULL && fp1 == NULL)
	{
		printf("failed to open file :\n");
		exit(0);
	}
	
	ch = fgetc(fp);
	while(c!=EOF)
	{
		fputc(c,fptr1);
		c = fgetc(fp);
	}
	
	printf("content successfully copy :\n");
	fclose(fp);
	return 0;
}

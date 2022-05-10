#include<stdio.h>
#include<stdlib.h>

int main()
{
	FILE *fp,*fp1;
	char ch,ch1;
	int c=0;
	int diff;
	
	fp=fopen("file.txt","r");
	fp1=fopen("file1.txt","r");
	
	if(fp == NULL || fp1 == NULL)
	{
		printf("unable to open file :\n");
		exit(0);
	}
	else
	{
	ch=fgetc(fp);
	ch1=fgetc(fp1);
	printf("ch= %c\tch1= %c\n",ch,ch1);
	c++;
	}
	
	while((ch!=EOF) && (ch1!=EOF))
	{
		ch=fgetc(fp);
		ch1=fgetc(fp1);
		if(ch == ch1)
		{
	//		printf("ch= %c\tch1= %c\n",ch,ch1);
		c++;
		}
		else
		{
			printf("after count %d string is not equal :\n",c);
			exit(0);
		}
	}
	printf("string is equal :\n");
	fclose(fp);
	fclose(fp1);
	
	return 0;
}	

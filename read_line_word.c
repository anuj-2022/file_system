#include<stdio.h>
#include<stdlib.h>

int main()
{
	FILE *fp;
	char data[50];
	int c=0,w=0,l=0;
	char ch;
	
	fp= fopen("file.txt","r");
	if(fp==NULL)
	{	
	printf("failed to open :\n");
	exit(0);
	}
	
	while((ch=fgetc(fp))!=EOF)
	{	
		c++;
		if(ch == '\n' || ch == '\0')
			l++;
		if(ch == ' ' || ch == '\t' || ch == '\n' || ch == '\0')
		w++;
	}
	
	printf("total characters %d\n",c);
	printf("total words %d\n",w);
	printf("total lines %d\n",l);
	
	fclose(fp);
	return 0;
}	

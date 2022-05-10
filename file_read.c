
#include<stdio.h>
#include<stdlib.h>

#define s 50

int main()
{
	char data[s],ch;
	FILE *fptr;

	fptr = fopen("file.txt","r");
	if(fptr==NULL)
	{
		printf("failed to open the file :\n");
		exit(0);
	}

	while((ch=fgetc(fptr))!=EOF)
	printf("%c",ch);

	fclose(fptr);

	printf("file created and saved successfully :\n");

	return 0;
}

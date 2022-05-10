
#include<stdio.h>
#include<stdlib.h>

#define s 50

int main()
{
//	int s;
//	printf("Enter the size :\n");
//	scanf("%d",&s);
	char data[s];
	FILE *fptr;

	fptr = fopen("file.txt","w");
	if(fptr==NULL)
	{
		printf("failed to open the file :\n");
		exit(0);
	}
	printf("Enter the data :\n");
	
	fgets(data,s,stdin);

	fputs(data,fptr);

	fclose(fptr);

	printf("file created and saved successfully :\n");

	return 0;
}

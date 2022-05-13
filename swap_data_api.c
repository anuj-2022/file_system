#include<stdio.h>

void swap_api(int *a,int *b);

int main()
{
	int a,b;
	printf("Enter the two number :\n");
	scanf("%d%d",&a,&b);
	printf("Data before swap a = %d b = %d\n",a,b);
	swap_api(&a,&b);
	printf("Data after swap a = %d b = %d\n",a,b);

	return 0;
}

void swap_api(int *a,int *b)
{
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}

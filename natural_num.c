#include<stdio.h>
int add(int a);

int main()
{
	int n=100;
	printf("result is %d\n",add(n));
	return 0;
}

int add(int a)
{
	if(a!=0)
	return a + add(a-1);
	else
	return a;
}
	

#include<stdio.h>

struct data
{
	int a;
	int b;
};
int main()
{
	struct data var={20,40};
	printf("x = %d y = %d\n",var.a,var.b);
	var.a=100;//allow
	printf("x = %d y = %d\n",var.a,var.b);
	const struct data var1={50,70};
	printf("x = %d y = %d\n",var1.a,var1.b);
//	var1.a=45;//not allow
return 0;
}

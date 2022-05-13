#include <stdio.h>

int result=0;

int rev_fun(int n);


int main()
{
    int n=234;
    
    printf("Hello World %d\n",rev_fun(n));

    return 0;
}

int rev_fun(int n)
{
    if(n!=0)
    {
    int temp=0;
    temp=n%10;
    result=result*10+temp;
    rev_fun(n/10);
    }
    else
        return n;
    return result;
    
}


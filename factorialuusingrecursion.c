#include<stdio.h>
long int fact(n);
int main()
{
    int n;
    scanf("%d",&n);
    printf("enter the number: %d",n);
    printf("\n");
    printf("the factorial of the %d is=%d",n,fact(n));
}
long int fact(n)
{
    if(n>=1)
    {
        return n*fact(n-1);
    }
    else
    {
        return 1;
    }
}

#include<stdio.h>
int factorial(int fact)
{
    if(fact<=1){
        return 1;
    }
    else
        return fact*factorial(fact-1);
}
int main()
{
    int fact;
    scanf("%d",&fact);
    printf("%d",factorial(fact));
}

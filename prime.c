#include<stdio.h>
#include <stdbool.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i;
    bool flag = true;
    if(n==1||n==0)
    {
        printf("\n not prime number");
    }
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            flag=false;
            break;
        }
    }
    if(flag==true)
    {
        printf("\n  prime number");
    }
    else
    {
        printf("\n not prime number");
    }
    return 0;
}

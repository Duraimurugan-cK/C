#include<stdio.h>
void main()
{
    int n,k;
    scanf("%d",&n);
    int f1=0,f2=1;
    if(n==1)
    {
        printf("%d",f1);
        k=n+1;
    }
    if(n==2)
    {
        printf("%d %d",f1,f2);
        k=n+1;
    }
    else{
    printf("%d %d ",f1,f2);
    }
    int fibo=0;
    int f3=0;
    for(k=2;k<n;k++)
    {
        f3=f1+f2;
        printf("%d ",f3);
        f1=f2;
        f2=f3;
    }
}

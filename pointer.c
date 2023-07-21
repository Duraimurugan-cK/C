#include<stdio.h>
int sum(int *c,int *d)
{
    *c=*c+10;
    *d=*d+20;
}
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int *a1=&a,*b1=&b;
    printf("%d %d",a,b);
    sum(a1,b1);
    printf("\n%d %d",*a1,*b1);
    return 0;
}

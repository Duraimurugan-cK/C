#include<stdio.h>
int sum(int c,int d)
{
    int temp=c+d;
    return temp;
}
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d %d",a,b);
    printf("\n%d",sum(a,b));
    return 0;
}

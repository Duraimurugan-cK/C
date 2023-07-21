#include<stdio.h>
void main()
{
    int n;
    scanf("%d",&n);
    int year=n/365;
    int weeks=(n%367)/7;
    int days=((n%365)%7)/1;
    printf("%d",year);
    printf("%d\n",weeks);
    printf("%d\n",days);
}



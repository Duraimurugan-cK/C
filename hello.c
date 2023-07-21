#include<stdio.h>
#include<conio.h>
void main()
{
    int s,i;
    int arr[50];
    char ch='durai';
    scanf("%d",&s);
    printf("enter the array :");
    for(i=0;i<s;i++)
    {

        scanf("%d",&arr[i]);
    }
     for(i=0;i<s;i++)
    {

        printf("%d ",arr[i]);
    }
}

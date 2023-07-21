#include<stdio.h>
#include<stdlib.h>
int main(){
int *ptr;
int n;
scanf("%d",&n);
ptr=(int *)malloc(n*sizeof(int));
if(ptr==NULL)
{
    printf("memory is not allocated");
}
for(int i=0;i<n;i++)
{
    printf("enter the integer:");
    scanf("%d",ptr+i);
}
for(int i=0;i<n;i++)
{
    printf("%d ",*(ptr+i));
}
}

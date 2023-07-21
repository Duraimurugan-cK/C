#include<stdio.h>
#include<stdlib.h>
int *memory()
{
    int i;
    int *ptr=(int *)malloc(3*sizeof(int));
    for(int i=0;i<3;i++)
    {
        printf("enter the integer:");
        scanf("%d",ptr+i);
    }
    return ptr;
}
int main()
{
    int n=0;
    int *ptr=memory();
    for(int i=0;i<3;i++)
    {
        n+=*(ptr+i);
    }
    printf("%d",n);
    free(ptr);
    ptr=NULL;
}

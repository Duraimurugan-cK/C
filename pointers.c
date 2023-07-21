#include<stdio.h>
int main()
{
    int a=10;
    int *p;
    int **q;
    p=&a;
    printf("SINGLE POINTER");
    printf("\n the value of a is %d",a);
    printf("\n the address of a is %d",&a);
    printf("\n the value of  p is %d",p);
    printf("\n the address of p is %d",&p);
    printf("\n the dereference of p is %d",*p);
    printf("\n DOUBLE POINTER");
    q=&p;
    printf("\n the value of p is %d",p);
    printf("\n the address of p is %d",&p);
    printf("\n the value of  q is %d",q);
    printf("\n the address of q is %d",&q);
    printf("\n the dereference of q is %d",**q);

}

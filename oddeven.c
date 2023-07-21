#include<stdio.h>
void main()
{
int n;
scanf("%d",&n);
int a[n];
int temp;
for(int i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
for(int i=0;i<n;i++)
{
    for(int j=i+1;j<n;j++)
    {

    if(a[i]%2==0)
    {
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }
    }
}
for(int i=0;i<n;i++)
{
    printf("%d",a[i]);
}


}

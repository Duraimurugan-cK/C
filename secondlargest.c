#include<stdio.h>
void main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int k=0;k<=n-1;k++)
    {
        scanf("%d",&a[k]);
    }
    for(int i=0;i<=n-1;i++)
    {
        for(int j=i+1;j<=n-1;j++)
        {
            if(a[i]>a[j])
            {
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(int k=0;k<=n-1;k++)
    {
        printf("%d ",a[k]);
    }
    printf("\n%d",a[n-2]);

}

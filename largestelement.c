#include<stdio.h>
void main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    int i;
    for( i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int max=a[0];
    for(i=1;i<n;i++)
    {
            if(max<a[i])
            {
                max=a[i];
            }
    }
    printf("%d",max);
}

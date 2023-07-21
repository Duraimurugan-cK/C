#include<stdio.h>
#include<string.h>
int main()
{
    char a[20];
    gets(a);
    puts(a);
    int len;
    int count=0;
    for( len=0;a[len]!='\0';len++);
    for(int i=0;i<len;i++)
    {
        if(a[i] == ' ')
        {
            count++;
        }
    }
    int b[count];
    int k=0;
    for(int i=0;i<len;i++)
    {
        if(a[i]==' ')
        {
            b[k]=i;
            printf("%d ",b[k]);
            k++;
        }
    }
    for(int i=0; i<len; i++)
    {
        if(i == 0)
        {
            for(int j=0;j<b[i];j++)
            {

            }
        }
    }
}


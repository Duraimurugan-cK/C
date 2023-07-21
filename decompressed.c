#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void main()
{
    char str[100];
    gets(str);
    int l=strlen(str);
    for(int i=0;i<l-1;i++)
    {
        if(str[i]>=97&&str[i]<=122)
        {
            int n=(int)(str[i+1]);
            for(int j=0;j<(int)n;j++)
            {
                printf("%c",str[i]);
            }
        }
        i=i+1;
    }

}

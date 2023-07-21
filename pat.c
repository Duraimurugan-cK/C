#include<stdio.h>
#include<string.h>
void main()
{
    char c[120];
    char f[120];
    char s[120];
    gets(c);
    int n=strlen(c);
    int y=0,l=0,o=0,r=0;
    while(c[r]!=' ')
    {
        o++;
        r++;
    }
    for(int i=0;i<n;i++)
    {
        if(c[i]!=' ')
        {
            f[i]=c[i];
            y=i;
        }
    }
    int q=0;
    for(int i=o+1;i<n;i++)
    {
        s[q]=c[i];
        q++;
    }
    puts(f);
    puts(s);
    int j=strlen(f);
    int k=strlen(s);
    for(int i=1;i<=j;i++)
    {
        for(int j=0;j<i;j++)
        {
            printf("%c",f[j]);
        }
        if(i>=k)
        {
            for(int i=0;i<k;i++)
            {
                printf("%c",s[i]);
            }
        }
        else
        {
        for(int m=0;m<i;m++)
        {
            printf("%c",s[m]);
        }
        }
        printf("\n");
    }

}

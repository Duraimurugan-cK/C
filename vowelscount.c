#include<stdio.h>
void main()
{
char str[100];
gets(str);
int len=strlen(str);
int count=0;
for(int i=0;i<len;i++)
{
    if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='o')
    {
        count++;
    }
}
printf("%d",count);
}

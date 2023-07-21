#include<stdio.h>
void main()
{
    char str[100];
    char gh;
    gets(str);
    scanf("%c",&gh);
    int len=strlen(str),count=0;
    for(int i=0;i<len-1;i++)
    {
        if(str[i]==gh)
        {
            printf("character found at index:");
            printf("%d\n",i);
            count++;
        }
    }
    if(count==0)
    {
        printf("character not found");
    }
}

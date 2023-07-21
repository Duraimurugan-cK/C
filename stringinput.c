#include<stdio.h>
#include<string.h>
void main()
{
    char str[100];
    int count=0;
    scanf("%[^\n]s",&str);
    printf("%s",str);
    int i;
    for( i=0;str[i]!='\0';i++);
    for(i=0;str[i]!='\0';i++)
    {
        count++;
    }
    printf("\n%d",i);
    printf("\n%d",count);
}

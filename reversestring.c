#include<stdio.h>
void main()
{
char str[100];
gets(str);
 int len=strlen(str);
 for(int i=0;i<len/2;i++)
 {
    int temp=str[i];
    str[i]=str[len-i-1];
    str[len-i-1]=temp;
 }
 printf("%s",str);
}

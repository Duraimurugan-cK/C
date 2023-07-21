#include<stdio.h>
#include<math.h>
void arms(int n,int count)
{
        int sum=0;
        int k=n,rem;
   while(k!=0)
    {
        rem=k%10;
        sum+=pow(rem,count);
        n/=10;
    }
    if(sum==n)
    {
        printf("armstrong number");
    }
    else
    {
        printf("not a armstrong number");
    }
void main()
{
    int n;
    scanf("%d",&n);
    int k=n;
    int rem,rev=0,count=0;
    arms(n,count);
    while(k!=0)
    {
        rem=k%10;
        rev=rev*10+rem;
        n/=10;
        count++;
    }
    if(rev==n)
    {
        printf("palindrome number");
    }
    else
    {
        printf("not a palindrome");
    }
 }


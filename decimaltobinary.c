#include<stdio.h>
void main()
{
    int n;
    scanf("%d",&n);
    int rev=0,rem,joy=0;
    while(n!=0)
    {
        rem=n%2;
        rev=rev*10+rem;
        n/=2;
    }
    int revs=rev;
    while(revs!=0)
    {
        rem=revs%10;
        joy=joy*10+rem;
        revs/=10;
    }
    printf("%d",joy);
}


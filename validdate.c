#include<stdio.h>
int main()
{
    int d,m,y;
    printf("date:");
    scanf("%d",&d);
    printf("month:");
    scanf("%d",&m);
    printf("year:");
    scanf("%d",&y);
    if(y>=1900 &&y<=1999)
    {
        if(m>=1 && m<=12)
        {
        if((m==1||m==3||m==5||m==7||m==8||m==10||m==12) && d>=1 && d<=31)
        {
            printf("valid date");
        }
        else if((m==4||m==6||m==9||m==11) && d>=1 && d<=30)
        {
            printf("valid date");
        }
        else if(m==2 &&d>=1&&d<=28)
        {
            printf("valid date");
        }
        else if(d==29&&y%400==0||(y%4==0&&y%100!=0))
        {
            printf("valid date");
        }
        else
        {
            printf("invalid date");
        }
    }
    else
        {
            printf("Invalid date");
        }
    }
     else
        {
            printf("invalid date");
        }
}

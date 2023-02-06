#include<stdio.h>
#include<windows.h>
int main()
{
    int year;
    printf("enter the year");
    scanf("%d",&year);
    if(year%100==0)
    {
        if(year%400==0)
        printf("leap year\n");
        else
        printf("not leap year");
    }
    else
    {
        if(year%4==0)
        printf("leap year");
        else
        printf("not leap year");
    }
}
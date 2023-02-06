#include<stdio.h>
#include<string.h>
#include<windows.h>
int main()
{
    system("cls");
    int year;
    printf("entert the year\n");
    scanf("%d",&year);
    if((year%4==0)&&(year%400==0||year%100!=0))
    printf("%d year is leap year",year);
    else
    printf("%d year is not leap year",year);
    return 0;
}
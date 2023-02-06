#include<stdio.h>
#include<windows.h>
int main()
{
    system("cls");
    int hours,overtime,o;
    int i=1;
    while(i<=10)
    {
        printf("enter the hours of %d employee\n",i);
        scanf("%d",&hours);
        if(hours>40)
        {
            overtime=hours-40;
            o=overtime*12;
        printf("overtime of %d employee is %d\n",i,o);
        }
        else
        printf("no overtime");
        i++;
    }
    return 0;
}
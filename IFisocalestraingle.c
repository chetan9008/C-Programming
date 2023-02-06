#include<stdio.h>
#include<string.h>
#include<windows.h>
int main()
{
    system("cls");
    int first,second,third;
    int large,sum;
    printf("enter the first side\nenter the second side\nenter the third side\n");
    scanf("%d%d%d",&first,&second,&third);
    if(first>second)
    {
        if(first>third)
        {
            sum=second+third;
            large=first;
        }
        else
        {
            sum=second+first;
            large=third;
        }
    }
    else
    {
        if(second>third)
        {
            sum=first+third;
            large=second;
        }
        else
        {
            sum=second+first;
            large=third;
        }
    }
    if(sum>large)
    printf("this is isocales traingle");
    else
    printf("this is not isocales traingle");
    return 0;
}
#include<windows.h>
#include<stdio.h>
int main()
{
    system("cls");
    int side1,side2,side3;
    printf("enter the three side\n");
    scanf("%d%d%d",&side1,&side2,&side3);
    if((side1==side2)&&(side2==side3)&&(side3==side1))
    printf("Given traingle is equilateral traingle\n");

    if((side1==side2)||(side2==side3)||(side3==side1))
    printf("Given traingle is isocales traingel");
    if(side1>side2)
    {
        if(side1>side3)
        {
            if((side1*side1)==(side2*side2)+(side3*side3))
            printf("Given traingle is right angled triangle");
        }
        else
        {
            if((side3*side3)==(side2*side2)+(side1*side1))
            printf("Given traingle is right angled triangle");
        }
    }
    else
    {
        if(side2>side3)
        {
            if((side2*side2)==(side1*side1)+(side3*side3))
            printf("Given traingle is right angled triangle");
        }
        else
        {
            if((side3*side3)==(side2*side2)+(side1*side1))
            printf("Given traingle is right angled triangle");
        }
    }
    if(!(side1==side2)&&!(side2==side3)&&!(side3==side1))
    printf("Given traingle is scalene traingle");
    
    return 0;
}
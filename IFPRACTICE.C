#include<stdio.h>
#include<string.h>
#include<windows.h>
int main()
{
    system("cls");
    int hardness,tensile;
    float carbon;
    printf("enter the hardness\nenter the Carbon content\nenter the Tensile strength\n");
    scanf("%d%f%d",&hardness,&carbon,&tensile);
    if((hardness>50)&&(carbon<0.7)&&(tensile>5600))
    printf("grade is 10");
    else
    if((hardness>50)&&(carbon<0.7))
    printf("grade is 9");
    else
    if((carbon<0.7)&&(tensile>5600))
    printf("grade is 8");
    else
    if((hardness>50)&&(tensile>5600))
    printf("grade is 7");
    else
    if((hardness>50)||(carbon<0.7)||(tensile>5600))
    printf("grade is 6");
    else
    if(!(hardness>50)&&!(carbon<0.7)&&!(tensile>5600))
    printf("grade is 5");
    
    
    return 0;
}
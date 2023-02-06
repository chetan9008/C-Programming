#include<stdio.h>
int main()
{
    for(int i=1;i<=5;i++)
    {
        if(i==5)
        printf("\n");
        if(i==1||i==5){
        for(int j=1;j<=5;j++)
        printf("* ");
        }
        if(i>1&&i<=4)
        {
            printf("\n");
            printf("*");
            for(int k=1;k<=7;k++)
            printf(" ");
            printf("*");
        }
    }
}
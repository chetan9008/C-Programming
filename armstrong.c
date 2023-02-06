#include<stdio.h>
int main()
{
    int arm=1;
    int a,b,c;
    while(arm<=500)
    {
        a=arm%10;
        b=arm/10;
        b=b%10;
        c=arm/100;
    if((a*a*a)+(b*b*b)+(c*c*c)==arm)
    printf("\n%d is armstrong\n",arm);
    arm++;
    }
    return 0;
}
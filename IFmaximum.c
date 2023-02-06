#include<stdio.h>
int main()
{
    int ram,shyam,ajay;
    printf("enter the age of RAM\n");
    scanf("%d",&ram);
    printf("enter the age of SHYAM\n");
    scanf("%d",&shyam);
    printf("enter the age of AJAY\n");
    scanf("%d",&ajay);
    
    if(ram<shyam)
    {
        if(ram<ajay)
        printf("ram is youngest\n");
        else
        printf("ajay is youngest\n");
    }
    else
    {
        if(shyam<ajay)
        printf("shyam is youngest\n");
        else
        printf("ajay is youngest\n");
    }
    return 0;
}
#include<stdio.h>
int main()
{
    int angle[3],sum=0;
    for(int i=0;i<3;i++)
    {
        printf("enter the %d angle\n",i+1);
        scanf("%d",&angle[i]);
        sum+=angle[i];
    }
    if(sum==180)
    printf("this is op traingle\n");
    else
    printf("this is ugly traingle\n");
}
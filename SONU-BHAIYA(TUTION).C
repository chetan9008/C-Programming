#include<stdio.h>
int main()
{
    long int sum=0,n=1;
    for(long int i=1;i<=30;i++)
    {
        sum+=n;
        n=2*n;
    }
    printf("sum is %Ld",sum);
}
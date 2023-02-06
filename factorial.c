#include<stdio.h>
int main()
{
    int n;
    int factorial=1;
    printf("enter the no");
    scanf("%d",&n);
    for(int i=n;i>=1;i--)
    {
        factorial=factorial*i;
    }
    printf("factorial of number is %d",factorial);
    return 0;
}
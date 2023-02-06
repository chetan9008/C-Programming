#include<stdio.h>
int main()
{
    int n,count=0;
    printf("enter the number\n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            count++;
        }
    }
    if(count==2)
    printf("no is prime\n");
    else
    printf("no is not prime");
    return 0;
}
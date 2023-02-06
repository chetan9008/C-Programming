#include<stdio.h>
#include<string.h>
int fac(int x)
{
    if(x!=1)
    {
        return(x*fac(x-1));
    }
}
int main()
{
    int n,f;
    printf("enter the number\n");
    scanf("%d",&n);
    f=fac(n);
    printf("factorial of number is %d",f);   
}
#include<stdio.h>
int sumdigit(int n)
{
    int r,sum=0;
    for(int i=1;i<=5;i++)
    {
        r=n%10;
        sum=sum+r;
        n=n/10;
    }
    return sum;
}
int recursivesum(int x)
{
    int r,sum=0;
    if(x!=0)
    {
        r=x%10;
        sum=r+recursivesum(x/10);        
    }
    return sum;
}
int main()
{
    int number;
    printf("enter the five digit no\n");
    scanf("%d",&number);
    printf("sum of five digit no is %d\nsum of digits with recursion is %d",sumdigit(number),recursivesum(number));
    return 0;
}
#include<stdio.h>
void recursivefactor(int x)
{
    static int i=2;
    if(x!=1)
    {
        if(x%i==0)
        {
            printf("%d\t",i);
            x=x/i;
        }
        else
        i++;
        recursivefactor(x);
    }
}
void primefactor(int n)
{
    int i=2;
    while(n!=1)
    {
        if(n%i==0)
        {
            printf("%d\t",i);
            n=n/i;
        }
        else
        i++;
    }
}
int main()
{
    int number;
    printf("enter the number\n");
    scanf("%d",&number);
    primefactor(number);
    printf("\n");
    recursivefactor(number);
    return 0;
}
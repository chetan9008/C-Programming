#include<stdio.h>
#include<windows.h>
int recursivebinary(int x)
{
    static int rem,decimal=0,power=1;
    if(x!=0)
    {
        rem=x%10;
        decimal=decimal+rem*power;
        power=power*2;
        recursivebinary(x/10);
    }
    return decimal;
}
int b(int n)
{
    int rem,decimal=0,power=1;
    while (n!=0)
    {
        rem=n%10;
        decimal=decimal+rem*power;
        power=power*2;
        n=n/10;
    }
    return decimal;
}
int main()
{
    system("cls");
    int d,binary,d1;
    printf("enter the binaray");
    scanf("%d",&binary);
    d=b(binary);
    d1=recursivebinary(binary);
    printf("decimal equivalent is %d\ndecimal equivalent of recursive fuction is %d",d,d1);
}
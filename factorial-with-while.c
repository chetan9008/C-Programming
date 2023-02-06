#include<stdio.h>
#include<windows.h>
int main()
{
    system("cls");
    int n,i;
    printf("enter the number\n");
    scanf("%d",&n);
    i=n;
    while(i>=2)
    {
        n=n*(i-1);
        i--;
    }
    printf("factorial is %d",n);
    
    return 0;
}
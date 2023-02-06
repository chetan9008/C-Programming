#include<stdio.h>
#include<windows.h>
int main()
{
    int f,s,i=1,n=1;
    printf("enter the first no\nenter the second no\n");
    scanf("%d%d",&f,&s);
    while(i<=s)
    {
        n=n*f;
        i++;
    }
    printf("power of %d rise to %d is %d",f,s,n);
    return 0;
}
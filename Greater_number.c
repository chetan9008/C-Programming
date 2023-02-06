#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter the three number:\n");
    scanf("%d%d%d",&a,&b,&c);
    (a>b)?((a>c)?printf("%d is greater\n",a):printf("%d is greater",c)):((b>c)?printf("%d is greater\n",b):printf("%d is greater",c));    
    return 0;
}
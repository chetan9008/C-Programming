#include<stdio.h>
#include<math.h>
int main()
{
    int decimal,sum=0,rem;
    int i=1;
    printf("enter the decimal\n");
    scanf("%d",&decimal);
    while(decimal!=0)
    {
        printf("i is %d\n",i);
        rem=decimal%8;
        sum+=rem*i;
        decimal=decimal/8;
        i*=10;
        printf("rem is %d\n",rem);
        printf("sum is %d\n",sum);
        printf("decimal is %d\n",decimal);
    }
    printf("octal equivalent is %d",sum);
}
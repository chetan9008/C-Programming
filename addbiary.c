#include<stdio.h>
void showbit(unsigned char );
int main()
{
    long a,b,sum;
    printf("enter the two binary");
    scanf("%d%d",&a,&b);
    printf("%d",a);
    showbit(a);

    printf("\n");
    showbit(b);
    printf("\n");
    sum=a+b;
    printf("sum of binary is :"); 
    showbit(sum);

}
void showbit(unsigned char n)
{
    unsigned char j,k,andmark;
    int i;
    for(i=7;i>=0;i--)
    {
        j=i;
        andmark=1<<j;
        k=n&andmark;
        (k==0)?printf("0"):printf("1");
    }
}
#include<stdio.h>
void showbit(unsigned char n)
{
    unsigned char j,k,andmark;
   for(int i=7;i>=0;i--)
   {
       j=i;
       andmark=1<<j;
       k=n&andmark;
       (k==0)?printf("0"):printf("1");
   }
}
int main()
{
    char binary;
    printf("enter the binary\n");
    scanf("%x",&binary);
    showbit(binary);
    int check=binary&1<<4;
    if(check==0)
    {
        printf("bit is off ");
    }
    else
    printf("bit is on");
}
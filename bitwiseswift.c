#include<stdio.h>
#include<stdlib.h>
void showbit(char n)
{
    char j,k,andmark;
    int i;
    for(i=7;i>=0;i--)
    {
        j=i;
        andmark=1<<j;
        k=n&andmark;
        (k==0)?printf("0"):printf("1");
    }
}
int main()
{
    char ch;
    printf("enter any no");
    scanf("%d",&ch);
    showbit(ch);
    ch=ch<<2;
    printf("\nswifted no is %d\n",ch);
    showbit(ch);
    return 0;
}
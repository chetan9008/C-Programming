#include<stdio.h>
int main()
{
    unsigned char ch;
    printf("enter the no");
    scanf("%d",&ch);
    unsigned j,k,andmark;
    for(int i=7;i>=0;i--)
    {
    j=i;
    andmark=1<<j;
    k=ch&andmark;
    (k==0)?printf("0"):printf("1");
    }
    return 0;
    }

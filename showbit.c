#include<stdio.h>
#define _bv(x) (1<<x)
#define _bv1(y,a) (y&a)
void showbit(unsigned char n)
{
    unsigned char j,k,andmark;
    for(int i=7;i>=0;i--)
    {
        j=i;
        andmark=_bv(j);
        k=_bv1(n,andmark);
        k==0?printf("0"):printf("1");
    }
}
int main()
{
    char ch;
    printf("enter the no");
    scanf("%x",&ch);
    showbit(ch);
    return 0;
}
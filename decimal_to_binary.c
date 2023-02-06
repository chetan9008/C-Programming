#include<stdio.h>
void showbit(unsigned char n)
{
    unsigned char j,k,andmark;
    int i;
    for(i=11;i>=0;i--)
    {
        j=i;
        andmark=1<<j;
        k=n&andmark;
        k==0?printf("0"):printf("1");
    }
}
int main()
{
    int  ch;
    printf("enter the  no");
    scanf("%d",&ch);
    printf("binary representaion of no is :");
    showbit(ch);

}
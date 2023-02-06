#include<stdio.h>
int main()
{
    int q;
    for(int i=1,q=1;i<=4;i++)
    {
        for(int j=10;j>=i;j--)
        printf("  ");
        for(int k=1;k<=i;k++,q++)
        printf("%d   ",q);
        printf("\n");
    }
}
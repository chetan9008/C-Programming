#include<stdio.h>
int main()
{
    for(int i=1;i<=10;i++)
    {
        for(int k=10;k>=i;k--)
        printf(" ");
        for(int j=1;j<=i;j++)
        printf("%c ",3);
        for(int l=9;l>=i;l--)
        printf("  ");
        for(int m=1;m<=i;m++)
        printf("%c ",3);
        printf("\n");
    }
    for(int i=20;i>=1;i--)
    {
        for(int j=20;j>=i;j--)
        printf(" ");
        for(int k=1;k<=i;k++)
        printf("%c ",3);
        printf("\n");
    }
}

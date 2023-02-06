#include<stdio.h>
int main()
{
    int i,j,k,l,m,n;
    char ch=3;
    for(i=1;i<=6;i++)
    {
        for(j=6;j>=i;j--)
        printf(" ");
        for(k=1;k<=i;k++)
        printf(" %c",ch);
        for(l=5;l>=i;l--)
        printf("  ");
        for(m=1;m<=i;m++)
        printf(" %c",ch);
        printf("\n");

    }
for(i=12;i>=1;i--)
{
    for(j=12;j>=i;j--)
    printf(" ");
    for(k=1;k<=i;k++)
    printf(" %c",ch);
    printf("\n");
}
    return 0;
}
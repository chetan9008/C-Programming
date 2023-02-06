#include<stdio.h>
int main()
{
    for(int i=71;i>=65;i--)
    {
        for(int j=65;j<=i;j++)
        printf("%c",j);
        for(int k=71;k>=i;k--)
        printf(" ");
        for(int m=70;m>=i;m--)
        printf(" ");
        for(int l=65;l<=i;l++)
        printf("%c",l);
        printf("\n");
    }
}
#include<stdio.h>
int main()
{
    int n=1,m=1,c,i=1;
    printf("%d\n%d\n",n,n);
    while(i<=30)
    {
        c=n;
        n=n+m;
        printf("%d\n",n);
        m=n;
        n=n-c;
        i++;
    }
}
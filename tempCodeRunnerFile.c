#include<string.h>
#include <stdio.h>
int fibonacci(int x,int y)
{
    int i=1,f;
    if(i<=25)
    {
        f=x+y;
        x=y;
        y=f;
        printf("%d\n",f);
        i++;
    }
    fibonacci(x,y);
}
int main()
{
fibonacci(0,1);
}

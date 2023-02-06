#include<stdio.h>
float factorial(float n)
{
    float f=1;
    while(n)
    {
        f*=n;
        n--;
    }
    return f;
}
int main()
{
    float sum=0;
    for(float i=1;i<=7;i++)
    {
        sum+=(i/factorial(i));
    }
    printf("sum of seven terms is %f",sum);
    return 0;
}
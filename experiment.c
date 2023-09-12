#include<stdio.h>
float function(float x)
{
    return ((x*x*x) + (4*x*x) - 10);
}
float bisection(float x,float y,float t)
{
    float mean;
    while((y-x) >= t)
    {
        mean = (x+y)/2.0;

        if(function(mean) == 0.0)
        {
            break;
        }

        if(function(mean) * function(x) < 0)
        {
            y = mean;
        }
        else
        {
            x = mean;
        }
    }

    return mean;
}
int main()
{
    float x,y,t,root;
    printf("Enter the first and second interval for the function : \n");
    scanf("%f%f",&x,&y);

    printf("Enter the correctness of root in point (eg .0001) : ");
    scanf("%f",&t);

    if(function(x) * function(y) < 0)
    {
        root = bisection(x, y, t);
        printf("Root for the appropriate equation is : %f", root);
    }
    else
    {
        printf("Please enter the valid positive and negative interval\n");
    }
    return 0;
}
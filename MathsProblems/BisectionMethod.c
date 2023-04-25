#include <stdio.h>
#include <math.h>
float less, big;
float function(float x)
{
    return ((x*x*x)+(4*x*x)-10);
}
float mean(float x, float y)
{
    return ((x + y) / 2.0);
}
void sort(float x, float y, float i, float j)
{
    if (x < y)
    {
        less = i;
        big = j;
    }
    else
    {
        big = i;
        less = j;
    }
}
int main()
{
    printf("\tx^3 + 4x^2 -10\n");
    printf("For the above equation roots by Bisection Method is :");
    float x, y, a;
    int n;
    float arr1[20];
    for (int i = 0;; i++)
    {
        x = function(i);
        y = function(i + 1);
        if (((x > 0) && (y > 0)) || ((x < 0) && (y < 0)))
            continue;
        else
        {
            sort(x, y, i, i + 1);
            break;
        }
    }
    for (int i = 0;; i++)
    {
        a = mean(less, big);
        x = function(a);
        if (x < 0)
        {
            less = a;
        }
        else
        {
            big = a;
        }
        arr1[i] = a;
        printf("\n\tIteration %d:%f\n",i,arr1[i]);
            if (arr1[i] == arr1[i + 1])
            {
                n = i + 1;
                printf("Hence the Root is : %f",a);
                break;
            }
    }
    return 0;
}
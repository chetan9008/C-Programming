#include <stdio.h>
#include <math.h>
double function(double x)
{
    return ((1 / 2) + sin(x));
}
double derivate(double x)
{
    return (cos(x));
}
double iterative(double i, double t, int mx)
{
    float x = i;
    float xn;
    for (int i = 0; i < mx; i++)
    {
        xn = derivate(x);
        if (fabs(xn - x) < t)
        {
            return xn;
        }
        x = xn;
    }
    return 0;
}
int main()
{
    double initial, tolerance;
    int maxIteration;
    printf("enter the initial value :");
    scanf("%lf", &initial);
    printf("enter the tolerance value :");
    scanf("%lf", &tolerance);
    printf("enter the maxIteration value :");
    scanf("%d", &maxIteration);

    double root = iterative(initial, tolerance, maxIteration);
    printf("the result is %lf", root);
    return 0;
}
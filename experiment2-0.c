#include <stdio.h>
#include <math.h>
float f(float x)
{
    return x * log10(x) - 1.2;
}
float df(float x)
{
    return log10(x) + 0.43429;
}
int main()
{
    int i, maxIteration;
    float h, initial, xn, tolerance;
    printf("\nEnter initial, allowed error and maximum iterations\n");
    scanf("%f %f %d", &initial, &tolerance, &maxIteration);
    for (i = 1; i <= maxIteration; i++)
    {
        h = f(initial) / df(initial);
        xn = initial - h;
        printf(" At Iteration no. %3d, x = %9.6f\n", i, xn);
        if (fabs(h) < tolerance)
        {
            printf("After %3d iterations, root = %8.6f\n", i, xn);
            return 0;
        }
        initial = xn;
    }
    printf(" The required solution does not converge or iterations are insufficient\n");
    return 1;
}
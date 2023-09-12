#include <stdio.h>
#include <math.h>

// Define the function for which you want to find the root.
double f(double x)
{
    return x * x * x - 4 * x - 9;
}

// Bisection method to find the root of the function within the given interval [a, b].
double bisection(double a, double b, double tol)
{
    double c;

    while ((b - a) >= tol)
    {
        // Find midpoint
        c = (a + b) / 2.0;

        // Check if the root is found or not
        if (f(c) == 0.0)
        {
            break;
        }

        // Update the interval [a, b]
        if (f(c) * f(a) < 0)
        {
            b = c;
        }
        else
        {
            a = c;
        }
    }

    return c;
}

int main()
{
    double a, b, tol, root;

    printf("Enter the interval [a, b]: ");
    scanf("%lf %lf", &a, &b);

    printf("Enter the tolerance (e.g., 0.0001): ");
    scanf("%lf", &tol);

    if (f(a) * f(b) >= 0)
    {
        printf("The function does not have opposite signs at the endpoints of the interval. Bisection method cannot be applied.\n");
    }
    else
    {
        root = bisection(a, b, tol);
        printf("The root of the function is approximately: %lf\n", root);
    }

    return 0;
}

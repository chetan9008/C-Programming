#include <stdio.h>
#include <math.h>

// Function to integrate
double f(double x)
{
    // Define your function here
    return (x * x); // Example: integrating sin(x)
}

double trapezoidal(double a, double b, int n)
{
    double h = (b - a) / n;   // Step size
    double sum = f(a) + f(b); // Sum of the endpoints
    sum /= 2;
    for (int i = 1; i < n; i++)
    {
        double x = a + i * h;
        sum += f(x);
    }

    return (h)*sum;
}

int main()
{
    double a, b;
    int n;

    printf("Enter the lower limit of integration: ");
    scanf("%lf", &a);
    printf("Enter the upper limit of integration: ");
    scanf("%lf", &b);
    printf("Enter the number of subintervals (must be a multiple of 3): ");
    scanf("%d", &n);

    double result = trapezoidal(a, b, n);
    printf("Approximate integral: %lf\n", result);

    return 0;
}

#include <stdio.h>

// Function representing the first-order ODE dy/dx = f(x, y)
double f(double x, double y)
{
    return x - y; // Example: dy/dx = x - y
}

// Fourth-order Runge-Kutta method
double runge_kutta(double x0, double y0, double h, double x_n)
{
    double x = x0;
    double y = y0;

    while (x < x_n)
    {
        double k1 = h * f(x, y);
        double k2 = h * f(x + h / 2, y + k1 / 2);
        double k3 = h * f(x + h / 2, y + k2 / 2);
        double k4 = h * f(x + h, y + k3);

        y += (k1 + 2 * k2 + 2 * k3 + k4) / 6;
        x += h;
    }

    return y;
}

int main()
{
    double x0 = 0.0;  // Initial x
    double y0 = 1.0;  // Initial y
    double h = 0.1;   // Step size
    double x_n = 2.0; // Target x

    double result = runge_kutta(x0, y0, h, x_n);
    printf("Approximate solution at x = %lf: y = %lf\n", x_n, result);

    return 0;
}

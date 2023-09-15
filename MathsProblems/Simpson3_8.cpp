#include <stdio.h>
#include<math.h>
double function(double x)
{
    return sin(x);
}
double simpson_3_8(double f, double s, int n)
{
    double h = (s - f) / n;
    double sum = function(f) + function(s);
    for (int i = 1; i < n; i++)
    {
        double x = f + i * h;
        if (i % 3 == 0)
        {
            sum += 2 * function(x);
        }
        else
        {
            sum += 3 * function(x);
        }
    }
    return ((3 * h) / 8) * sum;
}
int main()
{
    double first, second;
    int no_of_interval;
    printf("Enter the first interval : ");
    scanf("%lf", &first);
    printf("Enter the second interval : ");
    scanf("%lf", &second);
    printf("Enter the no of interval interval : ");
    scanf("%d", &no_of_interval);

    if (no_of_interval % 3 != 0)
    {
        printf("No of interval should muliple of 3\n");
    }
    double result = simpson_3_8(first, second, no_of_interval);

    printf("The result is %lf",result);
    return 0;
}
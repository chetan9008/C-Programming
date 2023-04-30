#include <stdio.h>
#include <math.h>
float factorial(float x)
{
    if (x == 0)
        return 1.0;
    else
        return (x * (factorial(x - 1)));
}
int main()
{
    int size;
    printf("Enter the no of elements:");
    scanf("%d", &size);
    float first[3] = {1981.0, 1901.0, 1911.0};
    float second[6] = {46.0, 66.0, 81.0, 93.0, 101.0};
    float table[6][6];
    for (int i = 0, j = 0; i < size; i++)
    {
        table[j][i] = second[i];
    }

    // finding u

    int m, n;
    m = size;
    n = size;
    float x;
    printf("Eneter the x:");
    scanf("%f", &x);
    float a = first[0];
    float h = first[2] - first[1];
    float u = (x - a) / h;
    float fx = table[0][0];
    int k = 0;
    float temp = u;

    // finding table

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            table[i + 1][j] = table[i][j + 1] - table[i][j];
        }
        n--;
    }

    // finding fx

    for (int i = 0; i < size - 1; i++)
    {
        u = temp;
        for (int j = 0; j < i; j++)
        {
            u *= (temp - (j + 1));
        }
        fx += ((u * (table[i + 1][k])) / factorial(i + 1));
    }
    printf("Estimate Population in %0.0f is:",x);
    printf("%f", fx);
}
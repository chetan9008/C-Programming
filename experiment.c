#include <stdio.h>
#include<math.h>
int main()
{
    float num = .25423333;
    float num1 = .254244444;
    num = floor(10000 * num) / 10000;
    num1 = floor(10000 * num1) / 10000;
    if(num == num1)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
}
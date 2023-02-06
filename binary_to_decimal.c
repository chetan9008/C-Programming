#include <stdio.h>
#include <conio.h>
int main()
{
    int remainder;
    int binary;
    printf("enter the binary");
    scanf("%d",&binary);
    int decimal = 0, w = 1;
    while(binary!=0)
    {
        remainder = binary % 10;
        decimal = decimal + remainder * w;
        w = w * 2;
        binary = binary / 10;
    }
    printf("decimal equivalent is %d", decimal);
    return 0;
}

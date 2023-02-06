#include <stdio.h>
int main()
{
    char ch;
    printf("enter the no range from 1 to 7 to represent colors");
    scanf("%d", &ch);
    if ((ch & 1) == 1)
        printf("voilet\n");
    if ((ch & 2) == 2)
        printf("indigo\n");
    if ((ch & 4) == 4)
        printf("blue\n");
    if ((ch & 8) == 8)
        printf("green\n");
    if ((ch & 16) == 16)
        printf("yellow\n");
    if ((ch & 32) == 32)
        printf("orange\n");
    if ((ch & 64) == 64)
        printf("red\n");
    return 0;
}
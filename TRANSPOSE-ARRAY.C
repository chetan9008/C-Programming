#include <stdio.h>
int main()
{
    int arr[3][2] = {
        1, 2,
        1, 4,
        1, 4

    };
    int transpose[3][2];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            transpose[i][j]= arr[j][i];
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf(" %d", transpose[i][j]);
        }
        printf("\n");
    }
}
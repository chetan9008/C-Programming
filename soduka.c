#include <stdlib.h>
#include <stdio.h>
int main()
{
    int check;
    int arr[9][9] = {5, 3, 4, 6, 7, 8, 9, 1, 2,
                     6, 7, 2, 1, 9, 5, 3, 4, 8,
                     1, 9, 8, 3, 4, 2, 5, 6, 7,
                     8, 5, 9, 7, 6, 1, 4, 2, 3,
                     4, 2, 6, 8, 5, 3, 7, 9, 1,
                     7, 1, 3, 9, 2, 4, 8, 5, 6,
                     9, 6, 1, 5, 3, 7, 2, 8, 4,
                     2, 8, 7, 4, 1, 9, 6, 3, 5,
                     3, 4, 5, 2, 8, 6, 1, 7, 9};
    for (int i = 0; i < 9; i++)
    {
        check=0;
        for (int j = 0; j < 9; j++)
        {
            check = check + arr[i][j];
        }
        if (check != 45)
        {
            
            printf("check the row\n");
            exit(0);
        }
    }
    printf("all rows are cleared\n");
    for(int i=0;i<9;i++)
    {
        check=0;
     for(int  j=0;j<9;j++)
     {
         check+=arr[j][i];
     }
     if(check!=45)
     {

     printf("check the column\n");
     exit(1);
     }
    }
    printf("all columns are cleared\n");
    return 0;
}
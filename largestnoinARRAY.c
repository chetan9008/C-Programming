#include<stdio.h>
int main()
{
    int arr[5][5]={
        1,2,39,40,5,
        6,77,86,9,1,
        2,3,4,75,6
    };
    int large=arr[0][0];
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            if(arr[i][j]>large)
            large=arr[i][j];
        }
    }
    printf("largest element is %d",large);
    return 0;
}
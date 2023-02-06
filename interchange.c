#include<stdio.h>
int main()
{
    int arr[]={12, 4, 5, 1, 9, 13, 11, 19, 54, 34};
    for(int i=0;i<10;i=i+2)
    {
            int t=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=t;      
    }
    for(int i=0;i<10;i++)
    {
        printf(" %d\t",arr[i]);
    }
    return 0;
}
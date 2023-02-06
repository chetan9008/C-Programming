#include<stdio.h>
int main()
{
    int arr[10],t;
    for(int i=0;i<10;i++)
    {
    printf("enter the ten no:");
    scanf("%d",&arr[i]);
    }
    for(int i=0;i<10;i++)
    {
    for(int j=0;j<10;j++)
    {
        if(arr[i]>arr[j])
        {
           t=arr[i];
           arr[i]=arr[j];
           arr[j]=t;
        }
    }
    }
    for(int i=0;i<10;i++)
    {
        printf("%d\n",arr[i]);
    }
    return 0;
}
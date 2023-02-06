#include<stdio.h>
int main()
{
    int arr[5],number,reverse,n;
    printf("enter the number\n");
    scanf("%d",&number);
    n=number;
    for(int i=0;i<5;i++)
    {
        arr[i]=number%10;
        number=number/10;
    }
    for(int i=0;i<5;i++)
    {
        printf("%d",arr[i]);
    }
    reverse=arr[0]*10000+arr[1]*1000+arr[2]*100+arr[3]*10+arr[4]*1;
    if(reverse==n)
    printf("this is pallindrome");
    return 0;
}
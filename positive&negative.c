#include<stdio.h>
int main()
{
    int  arr[10],negative=0,positive=0,odd=0,even=0;
    for(int i=0;i<10;i++)
    {
        printf("enter the no\n");
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<10;i++)
    {
        (arr[i]>0)?positive++:negative++;
        (arr[i]%2==0)?even++:odd++;
    }
    printf("no of positive is %d\nno of negative is %d\nno of odd is %d\nno of even is %d\n",positive,negative,odd,even);
    return 0;
}
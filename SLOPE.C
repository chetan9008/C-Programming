#include<stdio.h>
int main()
{
    int x1,y1,x2,y2,x3,y3,m,n;
    printf("enter the x1 value");
    scanf("%d",&x1);
    printf("enter the y1 value");
    scanf("%d",&y1);
    printf("enter the x2 value");
    scanf("%d",&x2);
    printf("enter the y2 value");
    scanf("%d",&y2);
    printf("enter the x3 value");
    scanf("%d",&x3);
    printf("enter the y3 value");
    scanf("%d",&y3);
    m=(y2-y1)/(x2-x1);
    n=(y3-y2)/(x3-x2);
    if(m==n)
    printf("Given three points lies on straight line");
    else
    printf("Given three points are not lies on straight line");
    
}
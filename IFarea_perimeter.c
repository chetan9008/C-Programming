#include<stdio.h>
int main()
{
    int length,breadth,area,perimeter;
    printf("enter the length and breadth\n");
    scanf("%d%d",&length,&breadth);
    area=length*breadth;
    perimeter=(2*(length+breadth));
    if(area>perimeter)
    {
        printf("area is greater than perimeter\n");
    }
    return 0;
}

#include<math.h>
#include<stdio.h>
int main()
{
    float radius,x,y,condition;
    printf("enter the radius and x and y cordinates\n");
    scanf("%f%f%f",&radius,&x,&y);
    condition=sqrt((pow(x,2))+(pow(y,2)));
    if(radius==condition)
    printf("on the centre\n");
    else
    {
        if(radius>condition)
        printf("outside the circle");
        else
        printf("inside the circle");
    }
    return 0;
}
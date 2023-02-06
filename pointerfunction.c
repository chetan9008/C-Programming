#include<stdio.h>
int display(int r){
    float a;
    a=3.14*r*r;
    return a;
}
int main()
{
    int radius;
    float area;
    radius=2;
    int (*ptr)(int );
    ptr=display;
    area=(float)(*display)(radius);
    printf("area of circle is %f",area);
    return 0;

}
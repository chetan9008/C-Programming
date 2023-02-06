#include<stdio.h>
int main()
{
    float km,cm,m,inches,feet;
    printf("enter the km\n");
    scanf("%f",&km);
    cm=100000.0*km;
    m=1000.0*km;
    inches=39370.1*km;
    feet=3280.84*km;
    printf("cm is %f\nm is %f\ninches is %f\nfeet is %f\n",cm,m,inches,feet);
    return 0;
}
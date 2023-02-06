#include<stdio.h>
#include<math.h>
int main()
{
    int length,breadth;
    printf("enter the length\n");
    scanf("%d",&length);
    printf("enter the breadth\n");
    scanf("%d",&breadth);
    float condition=sqrt(length*breadth);
    printf("%f is best ton ac for you",condition/10);
}
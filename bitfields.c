#define NO1 1
#define NO2 2
#define NO3 3
#define NO4 4
#include<stdio.h>
#include<conio.h>
int main()
{
    typedef struct book
    {
        unsigned rollnon:1;
        unsigned class:2;
        unsigned no:3;
        unsigned purse:4;
    }NUMBER;
    NUMBER n1,n2,n3,n4;
    n1.rollnon=NO1;
    n2.class=NO2;
    n3.no=NO3;
    n4.purse=NO4;
    printf("\nroll no is %d",n1.rollnon);
    printf("\nclass is %d",n2.class);
    printf("\nno is %d",n3.no);
    printf("\npurse no is %d",n4.purse);
    printf("\nsize of structure is %d",sizeof(NUMBER));
    return 0;
}
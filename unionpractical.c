#include<stdio.h>
int main()
{
    struct c1
    {
        char hobby[20];
        int credit;
    };
    struct c2
    {
        int vehicle;
        int distance;
    };
    union condition
    {
        struct c1 a;
        struct c2 b;
    };
    struct employee
    {
        char name[20];
        int grade;
        int age;
        union condition c; 
    }e;
    printf("enter the name \n enter the grade and age\n");
    scanf("%s%d%d",e.name,&e.grade,&e.age);
    printf("entered name and grade and age is %s\n%d\n%d\n",e.name,e.grade,e.age);
    if(e.grade==1)
    {
        printf("enter the hobbie and credit card no\n");
        scanf("%s%d",e.c.a.hobby,&e.c.a.credit);
        printf("%s%d",e.c.a.hobby,e.c.a.credit);
    }
    if(e.grade==2)
    {
        printf("enter teh vehical no and distance covered\n");
        scanf("%d%d",&e.c.b.vehicle,&e.c.b.distance);
        printf("%d%d",e.c.b.vehicle,e.c.b.distance);
    }
    return 0;   
}
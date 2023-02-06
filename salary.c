#include<stdio.h>
int main()
{
    float salary,da,houserent,final;
    printf("enter the salary\n");
    scanf("%f",&salary);
    da=(40.0/100.0)*salary;
    houserent=(20.0/100.0)*salary;
    printf("da is %fand house rent is %f\n",da,houserent);
    final=salary+da-houserent;
    printf("final salary is %f",final);
    return 0;
}
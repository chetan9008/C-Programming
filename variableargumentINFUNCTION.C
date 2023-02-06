#include<stdio.h>
#include<stdarg.h>
int sum(int no_of_arguments,...)
{
   int sum=0;
   va_list ptr;
   va_start(ptr,no_of_arguments);
   for(int i=0;i<no_of_arguments;i++)
   {
       int n=va_arg(ptr,int);
       sum+=n;
   }
   return sum;
}
int main()
{
    printf("sum of no is %d",sum(3,1,2,3));
    printf("\n");
    printf("sum of no is %d",sum(6,1,2,3,4,2,34));
    printf("\n");
    printf("sum of no is %d",sum(20,1,2,3,4,2,34,34,34,34,83,8,83,38,22,38438,82,38,384,83,2));
    return 0;
}
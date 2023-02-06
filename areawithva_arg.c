#include<stdio.h>
#include<stdarg.h>
int max(int no,...)
{
   va_list ptr;
   va_start(ptr,no);
   int max=va_arg(ptr,int);
   for(int i=0;i<no;i++)
   {
       int n=va_arg(ptr,int);
       if(n>max)
       {
           return n;
       }
   }
}
int main()
{
    
    printf("maximum no is %d",max(5,2,5389,238,238,333));
    return 0;
}
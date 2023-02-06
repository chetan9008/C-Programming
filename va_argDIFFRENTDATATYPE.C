#include<stdio.h>
#include<stdarg.h>
void display( char type,int n, ...)
{
    va_list ptr;
    va_start(ptr,no);
    switch(type)
    {
case a:
    for(int i=0;i<no;i++)
    {
        char ch = va_arg(ptr,char);
        printf("%c",ch);

    }
    }
}
int main()
{
    display(a,4,'a','b','c','d');
    return 0;
}
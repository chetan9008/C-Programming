#include<windows.h>
#include<stdio.h>
int recursive(int first,int second,int term)
{
    int number;
    if(term==0)
    return 0;
    number=first+second;
    printf("now the term is %d\t%d\n",term,number);
    first=second;
    second=number;
    recursive(first,second,term-1);
}
int main()
{
    system("cls");
    recursive(0,1,25);
}
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<malloc.h>
#include<Windows.h>
int main()
{
    char p[40];
    char ptr[3][40]={"To err is human", "But to really mess things up...","One needs to know C!"};
    for(int i=0;i<3;i++)
    {
       strcpy(p,&ptr[i][0]);
       strrev(p);
       printf("%s\n",p);
    }

    return 0;
}
#include<stdio.h>
#include<string.h>
#include<windows.h>
int main()
{
    char name[10],sir[10],last[10];
    printf("enter the name ,sir name and last name\n");
    gets(name);
    gets(sir);
    gets(last);
    printf("%c.%c.%s",name[0],sir[0],last);
    return 0;
}
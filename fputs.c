#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
int main()
{
    FILE *ptr;
    char s[80];
    ptr=fopen("new.txt","w");
    printf("enter the few line of text:");
    while(strlen(gets(s))>0)
    {
     fputs(s,ptr); 
    }
    fclose(ptr);
getch();
}
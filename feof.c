#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
    FILE *ptr;
    ptr=fopen("fread.c","r");
    char ch;
    while(!feof(ptr))
    {
        ch=fgetc(ptr);
        printf("%c",ch);
    }
    fclose(ptr);
    return 0;
}
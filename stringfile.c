#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    FILE *ptr;
    ptr=fopen("file.c","r");
    char string[40];
    while(fgets(string,40,ptr)!=NULL)
    {
      printf("%s",string);
    }
    fclose(ptr);
}
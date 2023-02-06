#include<stdio.h>
#include<string.h>
int main()
{
    char *len;
    len=strstr("chetan is good boy","chetan");
    if(len)
    {
        printf("%s is present in string","chetan");

    }
}
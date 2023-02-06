#include<stdio.h>
int main()
{
    int character=0;
    char ch;
    FILE *ptr;
    ptr=fopen("RECURSIONfactorial.c","r");
    while (1)
    {
        ch=fgetc(ptr);
        if(ch==EOF)
        {
            break;
        }
        printf("%c",ch);
        character++;
    }
    printf("Number of character is %d",character);
    return 0;
}
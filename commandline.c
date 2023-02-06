#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main(int argc, char const *argv[])
{
    FILE *ptr,*copy;
    char ch;
    ptr=fopen("argv[1]","r");
    copy=fopen("argv[2]","w");
    if(ptr==NULL&&copy==NULL)
    {
        printf("unable to open file");
        return 0;
    }
    while(1)
    {
        ch=fgetc(ptr);
        if(ch==EOF)
        break;
        fputc(ch,copy);
    }
            printf("file copied sucessfully\n");

    return 0;
}

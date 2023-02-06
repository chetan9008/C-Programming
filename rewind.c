#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{

    FILE *ptr;
    ptr=fopen("output.txt","w+");
    if(ptr==NULL)
    {

        printf("unable to open file");
        exit(1);
    }
    char ch[23]="hello world";
    fputs(ch,ptr);
    rewind(ptr);
    while(1)
    {
        char c=fgetc(ptr);
        if(c==EOF)
        {
            break;
        }
        else
        printf("%c",c);
    }
    fclose(ptr);
    return 0;

}
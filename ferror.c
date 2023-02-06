#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *ptr;
    char character[34]="warning is equal to :";
    ptr=fopen("wmodestr.txt","r");
    char ch[23]="you are very chutiya";
    if(ptr==NULL)
    {
        printf("unable to open file");
        exit(1);
    }
    fprintf(ptr,ch);
    clearerr(ptr);
    int no=ferror(ptr);
    printf("no of error is %d",no);
    perror(character);
    if(no==0)
    {
        printf("there is no erro");
    }
    else 
    printf("there is some error");
    return 0;

}
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
int main()
{
    FILE *ptr;
    ptr=fopen("new.exe","wb");
    struct book
    {
        int page;
        char roll;
        char name[34];
    }b;
    printf("enter the page,roll,name\n");
    fflush(stdin);
    
    fflush(stdin);
    scanf("%d%c%s",&b.page,&b.roll,b.name);
    
    fflush(stdin);
    fwrite(&b,sizeof(b),1,ptr);
    printf("%d%c%s",b.page,b.roll,b.name);
    fclose(ptr);
    getch();
    return 0;
    
}
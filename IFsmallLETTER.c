#include<stdio.h>
#include<string.h>
#include<windows.h>
int main()
{
    system("cls");
    char ch;
    printf("enter the characte\n");
    scanf("%c",&ch);
    if(ch>=65&&ch<=90)
    printf("this is capital letter");
    
    if(ch>=97&&ch<=122)
    printf("this is small letter");
    
    if(ch>=48&&ch<=57)
    printf("this is digit");
    
    if((ch>=0&&ch<=47)||(ch>=58&&ch<=64)||(ch>=91&&ch<=96)||(ch>=123&&ch<=127))
    printf("this is special symbol");
    return 0;
}
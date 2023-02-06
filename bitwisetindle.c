#include<stdio.h>
#include<conio.h>
int main()
{
    unsigned char ch;
    printf("enter the no");
    scanf("%d",&ch);
    unsigned char convert=~ch;
    printf("%d",convert);
    printf("%x",convert);
    printf("%X",convert);
    return 0;
}

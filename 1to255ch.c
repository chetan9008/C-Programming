#include<stdio.h>
int main()
{
    unsigned char ch=0;
    int i=0;
    while(i<=255)
    {
        printf("%d = %c\n",i,ch);
        ch++;
        i++;
    }
    return 0;
}
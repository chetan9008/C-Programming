#include<stdio.h>
int main()
{
    char ch[50];
    gets(ch);
    int i=0,number,f=0;
    while(ch[i]!='\0')
    {
        number=ch[i]-48;
        f=f*10+number;
        i++;
    }
    printf("%d",f);
    return 0;
   
}
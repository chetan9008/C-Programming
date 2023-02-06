#include<stdio.h>
int xstrcmp(char *c,char *c1)
{
    while((*c!='\0')||(*c1!='\0'))
    {
        if(*c!=*c1)
        return (*c-*c1);
        else
        return 0;
        c++;
        c1++;
    }
}
int main()
{
    int i;
    char ch[10],ch1[10];
    printf("enter two string \n");
    gets(ch);
    gets(ch1);
    i=xstrcmp(ch,ch1);
    if(i==0)
    printf("%d",i);
    else
    printf("%d",i);
    return 0;
}
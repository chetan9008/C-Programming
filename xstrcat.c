#include <stdio.h>
void xstrcat(char *p,char *ptr)
{
    printf("%s",p);
    printf("%s",ptr);
}
int main()
{
    char str[40];
    char s[50];
    printf("enter the 1st string\n");
    gets(str);
    printf("enter the 2nd string\n");
    gets(s);
    printf("concatinated string is : ");
    xstrcat(str,s);
    return 0;
}
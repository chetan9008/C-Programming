#include <stdio.h>
char xstrlen(char *s)
{
    int l=0;
    while(*s!=0)
    {
        printf("%c",*s);
        s++;
        l++;
    }
    return l;
}
int main()
{
    int length;
    char ch[] = "chetan";
    length=xstrlen(ch);
    printf("length of string is %d",length);
    return 0;
}

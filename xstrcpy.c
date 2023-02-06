#include <stdio.h>
void xstrcpy( char *c1,const char *c)
{
    while (*c != '\0')
    {
        *c1 = *c;
        c++;
        c1++;
    }
    *c1 = '\0';
}
int main()
{
    char ch[] = "chetan";
    char ch1[10];
    xstrcpy(ch1, ch);
    printf("original string is %s \n copyied string is %s", ch, ch1);
    return 0;
}
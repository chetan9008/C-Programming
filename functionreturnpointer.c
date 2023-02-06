/*#include<stdio.h>
char *copy(char *t,char *s)
{
    char *r;

    r=t;
    while(*s!='\0')
    {
        *t=*s;
        t++;
        s++;
    }
    *t='\0';
    return (r);
}
int main()
{
    char *string;
    char source[]="array and string make pointer confusing but these are not confusing but pointer make it ";
    char target[10];
    string=copy(target,source);
    printf("%s",string);
    return 0;
}*/
#include<stdio.h>
void *display()
{
    return "pointer in string is very easy and now i am confident to crack job in TCS and i can do this damm ";
}
int main()
{
    char *string;
    string=display();
    printf("%s",string);
    return 0;
}
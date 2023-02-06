#include <stdio.h>
#include <string.h>
#include <windows.h>
int main()
{
    char string[100];
    printf("enter the string\n");
    gets(string);
    int len = strlen(string);
    for(int i=0;i<len;i++)
    {
        if((string[i]=='t'||string[i]=='T')&&(string[i+1]=='h'||string[i+1]=='H')&&(string[i+2]=='e'||string[i+2]=='E')&&(string[i+3]==' '||string[i+3]=='\0'))
        {
            for(int j=i;j<len;j++)
            {
                string[j]=string[j+4];
            }
        }
    }
    printf("%s", string);
    return 0;
}
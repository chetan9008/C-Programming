#include<string.h>
#include<stdio.h>
int main()
{
    char ch1[50]="A";
    char ch2[50]="B";
    char result[50];
    for(int i=0;i<5;i++)
    {
        strcpy(result,ch2);
        strcat(result,ch1);
        printf("%s\n",result);
         strcpy(ch1,ch2);
        strcpy(ch2,result);   
    }
    return 0;
}
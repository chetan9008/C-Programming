#include<stdio.h>
#include<stdlib.h>
int  main()
{
    for(char i=0;i<128;i++)
    {
        printf("%s=%d",i,i);
    }
    return 0;
}
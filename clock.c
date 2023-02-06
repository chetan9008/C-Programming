#include<stdio.h>
#include<stdlib.h>
int main()
{
    int h,s,m,ms;
    system("cls");
    printf("\033[0;35m"); 
    printf("enter the hours:");
    scanf("%d",&h);
    printf("\nenter the minute:");
    scanf("%d",&m);
    x: 
    for(;h<12;h++)
    {
        for(;m<60;m++)
        {
            
            for(s=1;s<60;s++)
            {
                for(ms=1;ms<20;ms++)
                {
                    printf("\033[0;32m"); 
                    printf("\n\n\n\n\n\n\n\n");
                    printf("%30d : %d : %d",h,m,s);
                    system("cls");
                }
                ms=0;
            }
            s=0;
        }
        m=0;
    }
    h=0;
    goto x;
    return 0;
}
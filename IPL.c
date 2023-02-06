#include<string.h>
#include<stdio.h>
int main()
{
    char team[10][50]={"mumbai indians","gujrat titans","chennai super kings","rajasthan royals","delhi capitals","kolkata knight riders","royal challengers bangalore","kings 11 punjab","lucknow super gaints","sunrisers hyderabad"};
    char yourteam[50];
    printf("enter your team\n");
    gets(yourteam);
    int check,i;
    char flag='n';
    char winner[50]="chennai super kings";
    for(i=0;i<10;i++)
    {
        check=strcmp(&team[i][0],yourteam);
        if(check==0)
        {
            check=strcmp(yourteam,winner);
            if(check==0)
            {
                printf("%s will wins 2023 IPL FINAL\n",yourteam);
            }
            flag='f';
            break;
        }
    }
    if(flag=='n')
    printf("you entered wrong team\n");
    return 0;
}
#include<stdio.h>
#include<string.h>
int main()
{
    char *ptr;
    char *str[]={"aman","anurag","adnan","abhinav","abhishak","arav","aam","aditya"};
    for(int i=0;i<8;i++)
    {
        for(int j=i+1;j<8;j++)

        {
           if(strcmp(str[i],str[j])>0)
           {
            ptr=str[i];
            str[i]=str[j];
            str[j]=ptr;
           }
        }
    }
    for(int i=0;i<8;i++)
    {
        printf("%s\n",str[i]);
    }
    return 0;
}
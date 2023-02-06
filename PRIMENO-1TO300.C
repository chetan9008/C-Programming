#include<stdio.h>
int main()
{
    int count=0;
    for(int i=1;i<=300;i++)
    {
        for(int j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                count++;
            }
        }
        if(count==2||count==1)
        {
            printf("%d\n",i);
            count=0;
        }
        else
        {
        count=0;
        }
    }
}
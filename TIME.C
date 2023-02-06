#include <stdio.h>
int main( )
{
for(int time=0;time<=23;time++)
{
    if(time==0)
    printf("%d:00(Mid night)\n",12-time);
    if(time!=0&&time<12)
    printf("%d:00 AM\n",time);
    if(time==12)
    printf("%d:00(Noon)\n",time);
    if(time>12)
    printf("%d:00 PM\n",time-12);
}
return 0 ;
}
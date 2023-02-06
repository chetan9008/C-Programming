#include<stdio.h>
int main()
{
int n=512,m,l=0,re,arr[20];
m=n;
while(m!=0)
{
    l++;
    m=m/2;
}
int i=l-1;
while(n!=0)
{
    re=n%2;
    arr[i]=re;
    n=n/2;
    i--;
}
for(int i=0;i<=(l-1);i++)
{
printf("%d",arr[i]);
}
}
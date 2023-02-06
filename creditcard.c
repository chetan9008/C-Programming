#include<stdio.h>
int main()
{
  char str[20]="4567123456789129";
  int digit,multiple,sum=0;
  for(int i=15;i>=0;i--)
  {
    digit=str[i]-48;
    if(i%2==0)
    {
      multiple=digit*2;
      digit=multiple<10?multiple:multiple-9;
    }
    sum+=digit;
  }
  printf("sum is %d\n",sum);
  if(sum%10==0)
  {
    printf("valid credit card no \n");
  }
  else
  printf("invalid credit card no");
  return 0;
}
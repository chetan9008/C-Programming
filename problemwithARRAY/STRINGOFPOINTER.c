#include<stdlib.h>
#include<string.h>
#include<stdio.h>
int main()
{
  char *ptr[4];
  char ch[10];
  char *p;
  int len;
  for(int i=0;i<4;i++)
  {
    printf("enter the string\n");
    scanf("%s",ch);
    len=strlen(ch);
    p=(char *)malloc(len+1);
    strcpy(p,ch);
    ptr[i]=p;
  }
  for(int i=0;i<4;i++)
  {
    printf("%s\t",ptr[i]);
  }
  return 0;
}
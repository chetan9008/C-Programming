#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *ptr;
    ptr=fopen("output.txt","r");
    if(ptr==NULL)
    {
        printf("unable to open file");
        exit(1);
    }
    int position=ftell(ptr);
    printf("position of pointer in file is %d",position);
    position=fseek(ptr,3,SEEK_END);
    position=ftell(ptr);
    printf("position of pointer is %d\n",position);
    rewind(ptr);
    while(1)
{
char ch=fgetc(ptr);
if(ch==EOF)
break;
else
printf("%c",ch);
}
fclose(ptr);    
    return 0;
}
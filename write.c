#include<fcntl.h>
#include<sys\\stat.h>
#include<sys\\types.h>
#include<stdio.h>
#include<stdlib.h>
int main()
{
    char buffer[512], target[128], source[128];
    int handle1,handle2,byte;
    printf("enter the file name");
    gets(source);
    handle1=open(source,O_RDONLY|O_BINARY);
    if(handle1==-1)
    {
        printf("unable to open file");
        exit(1);
    }
    printf("enter the other file name");
    gets(target);
    handle2=open(target,O_CREAT|O_BINARY|O_WRONLY,S_IWRITE);
    if(handle2==-1)
    {
        printf("unable to open file");
        close(handle1);
        exit(2);
    }
    while(1)
    {
        byte=read(handle1,buffer,512);
        if(byte>0)
        {
            write(handle2,buffer,byte);
            
        }
        else
        break;
    }
    close(handle1);
    close(handle2);
    return 0;
}



/*#include<stdio.h>
int main()
{
    int i;
    int arr[101];
    for(i=0;i<101;i++)
    {
        arr[i]=i;
       
    }
     for(i=1;i<101;i++)
    {
        if(arr[i] !=2 && arr[i]%2==0)
        {
            arr[i]=0;
            printf("%d",arr[i]);
            
        }
    
    }
    for(i=2;i<101;i++)
    {
        if(arr[i] !=2&&arr[i]%3==0)
        {
            arr[i]=0;
            printf("%d",arr[i]);
            
        }
    
    }
    for(i=3;i<101;i++)
    {
        if(arr[i]%4==0)
        {
            arr[i]=0;
            printf("%d",arr[i]);
            
        }
    
    }
    for(i=4;i<101;i++)
    {
        if(arr[i] !=5&&arr[i]%5==0)
        {
            arr[i]=0;
            printf("%d",arr[i]);
            
        }
    
    }
     for(i=0;i<101;i++)
    {
        if(arr[i]!=0)
        {
            printf("\t%d\t",arr[i]);
        }
       
    }
    
}*/
#include<stdio.h>
int main()
{
    int arr[100],i,step,k,j,count;
    for(i=0;i<100;i++)
    {
        arr[i]=i+1;
    }
    for(i=1;i<100;i++)
    {
        if(arr[i]!=0)
        {
            k=arr[i]*2-1;
            step=arr[i];
            for(j = k;j<100;j=j+step)
            arr[j]=0;            
        }
    }
    for(i=0;i<100;i++)
    {
        if(arr[i]!=0)
        {
            printf("%d  ",arr[i]);  
        }
    }

    return 0;
}
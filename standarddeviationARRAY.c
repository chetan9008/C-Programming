#include<stdio.h>
#include<math.h>
int main()
{
    float  arr[15]={-6,-12,8,13,11,6,7,2,-6,-9,-10,-11,10,9,2};
    float std=0,mean=0;
    for(int i=0;i<15;i++)
    {
        mean+=arr[i];
    }
    mean=mean/15;
    for(int i=0;i<15;i++)
    {
    std+=(sqrt(pow(arr[i]-mean,2)))/2;
    }
    printf("mean of array is %fand standard deviation of array is %f",mean,std);
    return 0;
}
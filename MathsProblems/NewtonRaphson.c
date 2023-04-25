#include<stdio.h>
float function(float x)
{
    return ((x*x*x)-(3.0*x)-5.0);
}
float differentiate(float x)
{
    return ((3.0*x*x)-3.0);
}
void raphson(float mean)
{
    float arr[10];
    arr[0]= mean;
    for(int i=0;;i++)
    {
        arr[i+1]=arr[i] - ((function(arr[i]))/differentiate(arr[i]));
        printf("On Iteration %d : %f\n",i,arr[i]);
        if(arr[i]==arr[i+1])
        {
            printf("Hence By Newton Raphson Mehod \nThe Root is :%f\n",arr[i]);
            break;
        }
    }
}
int main()
{
    float x,y;
    for (int i = 0;; i++)
    {
        x = function(i);
        y = function(i + 1);
        if (((x > 0) && (y > 0)) || ((x < 0) && (y < 0)))
            continue;
        else
        {
            x=i;
            y=i+1;
            break;
        }
    }
    raphson(((x+y)/2.0));
}
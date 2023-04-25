#include<stdio.h>
#include<math.h>
float function(float x)
{
    return((1.0/2.0)+(sin(x)));
}
float differentiate(float x)
{
    return(cos(x));
}
void iterative(float mean)
{
    float arr[30];
    arr[0]= mean;
    int i=0;
    while(1)
    {
        arr[i+1]=function(arr[i]);
        printf("On Iteration %d : %f\n",i,arr[i]);
        if(arr[i]==arr[i+1])
        {
            printf("Hence By Newton Raphson Mehod \nThe Root is :%f\n",arr[i]);
            break;
        }
        i++;
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
    float mean = ((x+y)/2.0);
    if(differentiate(mean)<1)
    iterative(mean);
    else
    {
        printf("Please enter other equation\n");
    }
}
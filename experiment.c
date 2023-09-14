#include<stdio.h>
#include<math.h>
float function(float x)
{
    return x * log10(x) - 1.2;
}
float derivation(float x)
{
    return log10(x) + 0.43429;
}
int newtonRaphson(float i,float t,int mx)
{
    float xn,h,x0;
    x0 = i;
    for(int i=0;i<mx;i++)
    {
        h = function(x0) / derivation(x0);
        xn = x0 - h;
        if(fabs(h) < t)
        {
            printf("Root is %f",xn);
            return 0;
        }
        x0 = xn;
    }
    return 1;
}
int main()
{
    float initial = 2.0;
    float tolerance = .0001;
    float mx = 50;
    newtonRaphson(initial,tolerance,mx);
    return 0;
}
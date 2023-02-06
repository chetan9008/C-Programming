#include<math.h>
#include<stdio.h>
int main()
{
    int i,n=10;
    float  x[10]={3.0,4.5,5.5,6.5,7.5,8.5,8.0,9.0,9.5,10.0},y[10]={1.5,2.0,3.5,5.0,6.0,7.5,9.0,10.5,12.0,14.0};
    float xy=0,sx=0,sy=0,sqx=0,b,bar_mean_x,bar_mean_y,a;
    for(i=0;i<n;i++)
    {
    xy=xy+x[i]*y[i];
    sx=sx+x[i];
    sy=sy+y[i];
    sqx=sqx+x[i]*x[i];
    }
    printf("%cXY=%f\n%cX=%f\n%cY=%f\n%cX*X=%f\n",228,xy,228,sx,228,sy,228,sqx);
    b=((n*xy)-(sx*sy))/((n*sqx)-(sx*sx));
    printf("value of b is %f",b);
    bar_mean_x=sx/n;
    bar_mean_y=sy/n;
    a=bar_mean_y-b*bar_mean_x;
    printf("value of a is %f",a);
    return 0;
}
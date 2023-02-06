#include<stdio.h>
#include<math.h>
int main()
{
int i;
float r,xy=0,sx=0,sy=0,sqx=0,sqy=0,sqofx,sqofy;
float x[11]={34.22,39.87,41.85,43.23,40.06,53.29,53.29,54.14,49.12,40.71,55.17},y[11]={102.43,100.93,97.81,97.43,98.32,98.32,100.07,97.08,91.59,94.85,94.65};
for(i=0;i<11;i++)
{
xy=xy+x[i]*y[i];
sx=sx+x[i];
sy=sy+y[i];
sqx=sqx+pow(x[i],2);
sqy=sqy+pow(y[i],2);
}
printf("%cXY=%f\n%cX=%f\n%cY=%f\n%cX2=%f\n%cY2=%f\n",228,xy,228,sx,228,sy,228,sqx,228,sqy);
sqofx=pow(sx,2);
sqofy=pow(sy,2);
r=(xy-sx*sy)/(sqrt((11*sqx-sqofx)*(11*sqy-sqofy)));
printf("\ncorrelation coffecient is %f\n",r);
return 0;

}

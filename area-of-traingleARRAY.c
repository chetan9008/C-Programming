#include<stdio.h>
#include<math.h>
int main()
{
 float a[6],b[6],angle[6],large=0,area[6];
 for(int i=0;i<6;i++)
 {
     printf("enter %d side\n",1+i);
     scanf("%f",&a[i]);
     printf("enter %d side\n",1+i);
     scanf("%f",&b[i]);
     printf("enter %d angle\n",1+i);
     scanf("%f",&angle[i]);
     area[i]=(1.0/2.0)*a[i]*b[i]*sin(angle[i]);
     if(area[i]>large)
     {
         large=area[i];
     }
     printf("area of %d traingle is %f",1+i,area[i]);  
 }   
 printf("largest area of traingle is %f",large);
 
}
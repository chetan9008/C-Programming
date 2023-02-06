#include<stdio.h>
int main()
{
    int a[3][3],i,j,determinat;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("enter the [%d][%d] element",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    determinat=(a[0][0]*(a[2][2]*a[1][1]-a[1][2]*a[2][1]))-(a[0][1]*(a[1][0]*a[2][2]-a[2][0]*a[1][2]))+(a[0][2]*(a[1][0]*a[2][1]-a[2][0]*a[1][1]));
    printf("determinat of matrix is %d",determinat);
    return 0;

}
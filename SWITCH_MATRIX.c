#include<stdio.h>
#include<stdlib.h>
int main()
{
    char ch;
    printf("enter the case:\n");
    scanf("%c",&ch);
    int n;
    int arr1[10][10],arr2[10][10],sum[10][10],sub[10][10],mul[10][10],div[10][10];
    printf("enter n:");
    scanf("%d",&n);
    printf("\nenter the first array\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
        printf("enter the [%d][%d] element:",i,j);
        scanf("%d",&arr1[i][j]);
        }
    }
    printf("enter the second array\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
        printf("enter the [%d][%d] element:",i,j);
        scanf("%d",&arr2[i][j]);
        }
    }
    switch(ch)
    {
        case 'a':
        case 'A':
        printf("ADDITION OF TWO MATRIX IS:\n");
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                sum[i][j]=arr1[i][j]+arr2[i][j];
            }
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                printf("%d\t",sum[i][j]);
            }
            printf("\n");
        }
        break;
        case 'S':
        case 's':
        printf("SUBTRACTION OF TWO MATRIX IS:\n");
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                sub[i][j]=arr1[i][j]-arr2[i][j];
            }
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                printf("%d\t",sub[i][j]);
            }
            printf("\n");
        }
        break;
        case 'm':
        case 'M':
        printf("MULTIPLICATION OF TWO MATRIX IS:\n");
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                mul[i][j]=0;
               for(int k=0;k<n;k++)
               {
                mul[i][j]+=arr1[i][k]*arr2[k][j];

               }
            }
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                printf("%d\t",mul[i][j]);
            }
            printf("\n");
        }
        break;

    }
}
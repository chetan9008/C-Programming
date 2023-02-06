#include<stdio.h>
void show(int **s)
{
    printf("%d ",**s);
}
void display(int *n)
{
    show(&n);
}
int main()
{
    int arr[2]={23,21};
    for(int i=0;i<2;i++)
    {
        display(&arr[i]);
    }
    return 0;
}

/*#include<stdio.h>
#include<conio.h>
int main()
{
    union a
    {
        int and;
        char c;
      
    };
    union a row;
    row.and=2;
    row.c=6;
 
    printf("value is %d",row.and);
    printf("char is %c",row.c);
    
    return 0;

}*/
#include<stdio.h>
int main()
{
    struct a
    {
        int i;
        char c[2];
        /* data */
    };
    struct b
    {
        int j;
        char d[2];
        /* data */
    };
    union u
    {
        struct a key;
        struct b data;
    }s;
    s.key.i=2;
    s.data.d[0]=4;
    s.data.d[1]=23;
    printf("i=%d",s.key.i);
    printf("\n");
        printf("j=%d",s.data.j);
    printf("\n");
        printf("c[0]=%d",s.key.c[0]);
    printf("\n");
        printf("c[1]=%d",s.key.c[1]);
    printf("\n");
        printf("d[0]=%d",s.data.d[0]);
    printf("\n");
        printf("d[1]=%d",s.data.d[1]);
    printf("\n");
       
}
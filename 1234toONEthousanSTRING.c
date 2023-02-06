#include<stdio.h>
int *one[]={" ","one ","two","three","four","five","six","seven","eight","nine","ten","eleven","twelve","thirtheen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen"};
int *ten[]={" "," ","twenty","thirty","fourty","fifty","sixty","seventy","eighty","ninety"};
int convert(int n,char *s)
{
    if(n>19)
    printf(" %s %s ",ten[n/10],one[n%10]);
    else
    printf(" %s ",one[n]);
    if(n)
    {
        printf(" %s ",s);
    }

}
int main()
{
    int number;
    printf("enter the no:");
    scanf("%d",&number);
    if(number<=0)
    {
        printf("enter the number greater than 0\n");
    }
    else
    {
        convert((number/10000000),"Crose");
        convert((number/100000),"Lakh");
        convert((number/1000)%100,"Thousand");
        convert((number/100)%10,"Hundred");
        convert((number%100)," ");
    }
}
#include<stdio.h>
int main()
{
int date,month;
printf("enter the date\nenter the month\n");
scanf("%d%d",&date,&month);

if((date>=22&&month==12)||(date<=19&&month==1))
printf("Capricorn(Makar)");
if((date>=20&&month==1)||(date<=17&&month==2))
printf("Aquarius(Kombh)");
if((date>=18&&month==2)||(date<=19&&month==3))
printf("Pisces(Meene)");
if((date>=20&&month==3)||(date<=19&&month==4))
printf("Aries(Mesh)");
if((date>=20&&month==4)||(date<=20&&month==5))
printf("Taurus(Vrushabh)");
if((date>=21&&month==5)||(date<=20&&month==6))
printf("Gemini(Mithun)");
if((date>=21&&month==6)||(date<=22&&month==7))
printf("Cancer(Kark)");
if((date>=23&&month==7)||(date<=22&&month==8))
printf("Leo(Sinh)");
if((date>=23&&month==8)||(date<=22&&month==9))
printf("Virgo(Kanya)");
if((date>=23&&month==9)||(date<=22&&month==10))
printf("Libra(Tula)");
if((date>=23&&month==10)||(date<=21&&month==11))
printf("Scorpio(vrshchik)");
if((date>=22&&month==11)||(date<=21&&month==12))
printf("Sagittarius(Dhanu)");
}
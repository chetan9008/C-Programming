
# include <stdio.h>
int main( )
{
int leapdays, firstday, yr ;
long int normaldays, totaldays ;
printf ( "Enter year:" ) ;
scanf ( "%d", &yr );
normaldays = ( yr - 1 ) * 365 ;
printf("normal days = %d\n",normaldays);
leapdays = ( yr - 1 ) / 4 - ( yr - 1 ) / 100 + ( yr - 1 ) / 400 ;
printf("leap days = %d\n",leapdays);
totaldays = normaldays + leapdays ;
printf("total days = %d\n",totaldays);
firstday = totaldays % 7 ;
printf("first day = %d\n",firstday);
if ( firstday == 0 )
printf ( "Monday\n" ) ;
if ( firstday == 1 )
printf ( "Tuesday\n" ) ;
if ( firstday == 2 )
printf ( "Wednesday\n" ) ;
if ( firstday == 3 )
printf ( "Thursday\n" ) ;
if ( firstday == 4 )
printf ( "Friday\n" ) ;
if ( firstday == 5 )
printf ( "Saturday\n" ) ;
if ( firstday == 6 )
printf ( "Sunday\n" ) ;
return 0 ;
}
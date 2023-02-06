#include<stdio.h>
int main( )
{
int mat[ 4 ][ 4 ], i, j, temp[4][4] ,count=0;
printf ( "\nEnter values for 4 x 4 matrix:\n " ) ;
for ( i = 0 ; i <= 3 ; i++ )
{
for ( j = 0 ; j <= 3 ; j++ )
scanf ( "%d", &mat[ i ][ j ] ) ;
}
printf ( "\n\nThe matrix you entered is:\n" ) ;
for ( i = 0 ; i <= 3 ; i++ )
{
for ( j = 0 ; j <= 3 ; j++ )
printf ( "%d\t", mat[ i ][ j ] ) ;
printf ( "\n" ) ;
}
/* Transpose the matrix */
for ( i = 0 ; i <= 3 ; i++ )
{
for ( j = 0 ; j <= 3 ; j++ )
{
    temp[i][j]=mat[j][i];
}
}
printf ( "\n\nTranspose of the matrix is:\n" ) ;
for ( i = 0 ; i <= 3 ; i++ )
{
for ( j = 0 ; j <= 3 ; j++ )

printf ( "%d\t",temp[ i ][ j ] ) ;
printf ( "\n" ) ;
}
for(i=0;i<4;i++)
{
    for(j=0;j<4;j++)
{
    if(temp[i][j]==mat[i][j])
    count++;
}
}
if(count==16)
printf("entered matrix is symatric");
return 0 ;
}
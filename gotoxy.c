#include<windows.h>
#include<stdio.h>
void gotoxy ( short col, short row )
{
HANDLE hStdout = GetStdHandle ( STD_OUTPUT_HANDLE ) ;
COORD position = { col, row } ;
SetConsoleCursorPosition ( hStdout, position ) ;
}
int main()
{
    system("cls");
    int c=5,r=04;
    gotoxy(c,r);
    for(int i=0;i<5;i++)
    {
    printf("%c",3);
    }
    
    return 0;
}

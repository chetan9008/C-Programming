#include <stdio.h>
int main()
{
    int d, m, y, i, j, t;
    struct information
    {
        unsigned date : 5;
        unsigned month : 4;
        unsigned year : 12;
    } dat[2];
    for (int i = 0; i < 2; i++)
    {
        printf("enter the date\n");
        scanf("%d%d%d", &d, &m, &y);
        if ((d < 1 || d > 31) || (m < 1 || m > 12) || (y < 1900 || y > 2022))
        {
            printf("invalid date");
            i--;
            continue;
        }
        dat[i].date = d;
        dat[i].month = m;
        dat[i].year = y;
    }
    for (i = 0; i < 2; i++)
    {
        for (j = i + 1; j < 2; j++)
        {
            if (dat[i].date > dat[j].date)
            {
                t = dat[i].date;
                dat[i].date = dat[j].date;
                dat[j].date = t;
            }
            if (dat[i].month > dat[j].month)
            {
                t = dat[i].month;
                dat[i].month = dat[j].month;
                dat[j].month = t;
            }
            if (dat[i].year > dat[j].year)
            {
                t = dat[i].year;
                dat[i].year = dat[j].year;
                dat[j].year = t;
            }
        }
    }
    for (i = 0; i < 2; i++)
    {
        printf("date is %d/%d/%d\n", dat[i].date, dat[i].month, dat[i].year);
    }
    printf("size of structure is %d",sizeof(dat[i]));
    return 0;
}
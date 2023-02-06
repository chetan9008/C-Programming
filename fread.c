#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    FILE *ptr;
    struct book
    {
        int page;
        float price;
        char name[12];
    } e = {23, 23.3, "chetan"};
    ptr = fopen("fprintf.c", "r");
    if (ptr == NULL)
    {
        printf("unable to open file");
        exit(1);
    }
    while (fread(&e,sizeof(e),1,ptr) == 1)
    {
      printf("%d%f%s",e.page,e.price,e.name);
    }
    fclose(ptr);
    return 0;
}
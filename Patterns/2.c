#include <stdio.h>
#include <conio.h>
void main()
{
    int i, j;
    for (j = 'A'; j <= 'E'; j++)
    {
        for (i = 'A'; i <= j; i++)
        {
            printf("%c ", i);
        }
        printf("\n");
    }
}
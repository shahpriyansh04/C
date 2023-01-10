#include <stdio.h>
#include <conio.h>
int main()
{
    int i, j;
    for (j = 'D'; j >= 'A'; j--)
    {
        for (i = 'A'; i <= j; i++)
        {
            printf("%c ", i);
        }
        printf("\n");
    }
    return 0;
}
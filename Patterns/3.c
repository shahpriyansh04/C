#include <stdio.h>
#include <conio.h>
void main()
{
    for (int j = 5; j >= 1; j--)
    {
        for (int i = 5; i >= j; i--)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
}
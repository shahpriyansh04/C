#include <stdio.h>
#include <conio.h>
void main()
{
    int i, c = 0;
    for (int j = 1; j <= 100; j++)
    {

        for (i = 1; i <= j; i++)
        {
            if (j % i == 0)
            {
                c++;
            }
        }
        if (c == 2)
        {
            printf("%d\n", j);
        }
        c = 0;
    }
}
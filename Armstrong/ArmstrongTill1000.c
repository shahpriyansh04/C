#include <stdio.h>
#include <conio.h>
void main()
{
    int n, r, temp, sum = 0;

    for (int i = 1; i <= 1000; i++)
    {
        n = i;
        temp = n;
        while (n > 0)
        {
            r = n / 10;
            n = n % 10;
            sum += n * n * n;
            n = r;
        }
        if (sum == temp)
        {
            printf("%d\n", temp);
        }
        r = 0;
        sum = 0;
    }
}
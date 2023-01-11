#include <stdio.h>
void main()
{
    int n, r, c = 0;
    printf("Enter a number : ");
    scanf("%d", &n);
    while (n > 0)
    {
        r = n % 10;
        n = n / 10;
        c++;
    }
    printf("Number of digits : %d", c);
}
#include <stdio.h>
#include <conio.h>
void main()
{
    int n, r, temp, sum = 0;
    printf("Enter a number : ");
    scanf("%d", &n);
    temp = n;
    while (n > 0)
    {
        r = n / 10;
        n = n % 10;
        sum = sum + n * n * n;
        n = r;
    }
    if (sum == temp)
    {
        printf("Armstrong number");
    }
    else
    {
        printf("Not an armstrong number");
    }
}
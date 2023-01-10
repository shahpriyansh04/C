#include <stdio.h>
#include <conio.h>
void main()
{

    int n, rev = 0, i, temp;
    printf("Enter a number: ");
    scanf("%d", &n);
    temp = n;
    while (n > 0)
    {
        i = n / 10;
        n = n % 10;
        rev = (rev * 10) + n;
        n = i;
    }

    if (temp == rev)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not a Palindrome");
    }
}
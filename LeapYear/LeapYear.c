#include <stdio.h>
void main()
{
    int n;
    printf("Enter a year : ");
    scanf("%d", &n);
    if (n % 4 == 0)
    {
        if (n % 100 == 0)
        {
            if (n % 400 == 0)
            {
                printf("Leap Year");
            }
            else
            {
                printf("Not a Leap Year");
            }
        }
        else
        {
            printf("Leap Year");
        }
    }
    else
    {
        printf("Not a Leap Year");
    }
}
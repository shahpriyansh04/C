#include <stdio.h>
#include <conio.h>
void main()
{
    int n1, n2, n3;
    n1 = 1;
    n2 = 2;

    printf("%d %d ", n1, n2);
    for (int i = 0; i < 5; i++)
    {
        n3 = n1 + n2;
        printf("%d ", n3);
        n1 = n2;
        n2 = n3;
    }
}
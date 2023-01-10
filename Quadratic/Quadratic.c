#include <stdio.h>
#include <math.h>
void main()
{
    int a, b, c;
    float x1, x2;
    printf("Enter value of A : ");
    scanf("%d", a);
    printf("Enter value of B : ");
    scanf("%d", b);
    printf("Enter value of C : ");
    scanf("%d", c);
    x1 = (-b + sqrtf((b * b) - 4 * a * c)) / (2 * a);
    x2 = (-b - sqrtf((b * b) - 4 * a * c)) / (2 * a);
    printf("The roots are %f and %f", x1, x2);
}
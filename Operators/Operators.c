#include <stdio.h>
void main()
{
    int n;
    float f;
    char c;
    printf("Enter number: ");
    scanf("%d", &n);
    printf("Enter float: ");
    scanf("%f", &f);
    printf("Enter character: ");
    scanf("%s", &c);
    printf("Number: %d\n", n);
    printf("Float: %f\n", f);
    printf("Character: %c", c);
}
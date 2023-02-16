/*
EX6:

Write Source Code to Swap Two Numbers
*/
#include <stdio.h>
int main()
{
    float a, b, c;
    fflush(stdin);
    fflush(stdout);
    printf("Enter value of a: ");
    scanf("%f", &a);
    printf("Enter value of b: ");
    scanf("%f", &b);
    c = a;
    a = b;
    b = c;
    printf("After swapping, value of a = %f\n", a);
    printf("After swapping, value of b = %f", b);
}
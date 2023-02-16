/*
EX7:
it is an interview trick

Write Source Code to Swap Two Numbers without temp variable.
*/
#include <stdio.h>
int main()
{
    float a, b;
    fflush(stdin);
    fflush(stdout);
    printf("Enter value of a: ");
    scanf("%f", &a);
    printf("Enter value of b: ");
    scanf("%f", &b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("After swapping, value of a = %f\n", a);
    printf("After swapping, value of b = %f", b);
}
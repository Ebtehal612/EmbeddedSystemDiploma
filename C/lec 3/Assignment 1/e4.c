/*

Write C Program to Multiply two Floating Point Numbers
*/
#include <stdio.h>
int main()
{
    printf("Enter two numbers: ");
    float x, y;
    fflush(stdin);
    fflush(stdout);
    scanf("%f%f", &x, &y);
    printf("Product: %f", x * y);
}
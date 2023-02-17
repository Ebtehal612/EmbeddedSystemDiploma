#include <stdio.h>
int main()
{
    char n;
    float x, y, z;
    printf("Enter pperator ether + or - or * o rdivide :");
    scanf("%c", &n);
    printf("Enter two operands: ");
    scanf("%f", &x);
    scanf("%f", &y);
    fflush(stdin);
    fflush(stdout);

    if (n == '-')
    {
        z = x - y;
        printf("%f %c %f = %f", x, n, y, z);
    }
    else if (n == '+')
    {
        z = x + y;
        printf("%f %c %f = %f", x, n, y, z);
    }
    else if (n == '*')
    {
        z = x * y;
        printf("%f %c %f = %f", x, n, y, z);
    }
    else if (n == '/')
    {
        z = x / y;
        printf("%f %c %f = %f", x, n, y, z);
    }
}
#include <stdio.h>
int fac(int x)
{
    if (x > 1)
    {
        return x * fac(x - 1);
    }
    else if (x == 1 || x == 0)
        return 1;
}
int main()
{
    int x;
    printf("Enter an positive integar: ");
    scanf("%d", &x);
    printf("Factorial of %d = %d", x, fac(x));

    return 0;
}
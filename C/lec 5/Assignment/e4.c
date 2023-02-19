#include <stdio.h>
int power(int a, int b)
{

    if (b > 0)
        return (a * power(a, b - 1));
    else
        return 1;
}
int main()
{
    int x, y;
    printf("Enter base number: ");
    scanf("%d", &x);
    printf("Enter power number(positive number): ");
    scanf("%d", &y);
    printf("%d^%d = %d", x, y, power(x, y));
}

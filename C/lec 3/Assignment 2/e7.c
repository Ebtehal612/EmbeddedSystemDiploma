#include <stdio.h>
int main()
{
    int n, p = 1;
    printf("Enter an integer: ");
    fflush(stdin);
    fflush(stdout);
    scanf("%d", &n);
    if (n > 0)
    {
        for (int i = n; i > 0; i--)
        {
            p = p * i;
        }
        printf("Factorial = %d", p);
    }
    else
    {
        printf("Error!!! Factorial of nigative number is exist");
    }
}
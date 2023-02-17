#include <stdio.h>
int main()
{
    int n, sum = 0;
    printf("Enter an integer: ");
    fflush(stdin);
    fflush(stdout);
    scanf("%d", &n);
    if (n > 0)
    {
        for (int i = 0; i <= n; i++)
        {
            sum = sum + i;
        }
        printf("Sum = %d", sum);
    }
}
#include <stdio.h>
int prime(int x)
{
    int c = 0;
    for (int i = 2; i <= x / 2; i++)
    {
        if (x % i == 0)
        {
            c++;
            break;
        }
    }

    if (c == 0)
    {
        printf("%d ", x);
    }
    c = 0;
}
int main()
{
    int m, n;
    printf("Enter two numbers (intervals): ");
    scanf("%d", &m);
    scanf("%d", &n);
    for (int i = m; i <= n; i++)
    {
        prime(i);
    }
}
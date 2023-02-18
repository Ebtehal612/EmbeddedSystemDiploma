#include <stdio.h>
int main()
{
    int n, m, z;
    printf("Enter no of elements :\n");
    scanf("%d", &n);
    int x[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &x[i]);
        fflush(stdin);
        fflush(stdout);
    }
    printf("Enter element to search :\n");
    scanf("%d", &m);
    for (int i = 0; i < n; i++)
    {
        if (x[i] == m)
        {
            printf("Number found at location = %d", i + 1);
        }
    }
}
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
    printf("Enter the element to be ensert :\n");
    scanf("%d", &m);
    printf("Enter the location :\n");
    scanf("%d", &z);

    for (int i = n; i >= z; i--)
    {
        x[i] = x[i - 1];
    }
    n++;
    x[z - 1] = m;
    for (int i = 0; i < n; i++)
    {
        printf("%d ", x[i]);
        fflush(stdin);
        fflush(stdout);
    }
}
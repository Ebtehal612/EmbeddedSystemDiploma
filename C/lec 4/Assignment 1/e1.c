#include <stdio.h>
int main()
{
    float x[2][2], y[2][2], z[2][2];
    printf("Enter two elements of 0st matrix :\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("Enter a%d%d: \n", i + 1, j + 1);
            scanf("%f", &x[i][j]);
            fflush(stdin);
            fflush(stdout);
        }
    }
    printf("Enter two elements of 2nd matrix :\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("Enter b%d%d: \n", i + 1, j + 1);
            scanf("%f", &y[i][j]);
            fflush(stdin);
            fflush(stdout);
        }
    }
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            z[i][j] = x[i][j] + y[i][j];
        }
    }
    printf("Sum of matrix :\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%f\t", z[i][j]);
            fflush(stdin);
            fflush(stdout);
        }
        printf("\n");
    }
}
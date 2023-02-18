#include <stdio.h>
int main()
{
    int n, m;
    printf("Enter rows and colums of matrix :\n");
    scanf("%d", &n);
    scanf("%d", &m);
    float x[n][m];
    printf("Enter elements of matrix: \n");
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            printf("Enter element a%d%d: \n", i + 1, j + 1);
            scanf("%f", &x[i][j]);
        }
    }
    printf("Entered matrix: \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%f   ", x[i][j]);
        }
        printf("\n");
    }
    printf("Transpose of matrix: \n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {

            printf("%f   ", x[j][i]);
        }
        printf("\n");
    }
}
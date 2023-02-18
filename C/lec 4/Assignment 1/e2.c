#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number of data :\n");
    scanf("%d", &n);
    float x[n], sum = 0.0, avg;
    for (int i = 0; i < n; i++)
    {

        printf("%d. Enter number: \n", i + 1);
        scanf("%f", &x[i]);
        sum = sum + x[i];
    }
    avg = sum / n;
    printf("Avarage = %f", avg);
}
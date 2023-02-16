/*
EX3:

Write C Program to Add Two Integers
*/
#include <stdio.h>
int main()
{
    printf("Enter two integers: ");
    int x, y;
    fflush(stdin);
    fflush(stdout);
    scanf("%d%d", &x, &y);
    printf("Sum: %d", x + y);
}
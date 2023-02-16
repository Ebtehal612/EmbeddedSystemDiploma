/*
EX2:

Write C Program to Print a Integer Entered by a User
*/
#include <stdio.h>
int main()
{
    int num;
    printf("Enter a integer: ");
    fflush(stdin);
    fflush(stdout);
    scanf("%d", &num);
    printf("You entered: %d", num);
}
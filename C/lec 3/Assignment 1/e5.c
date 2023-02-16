/*
EX5:

Write C Program to Find ASCII Value of a Character
*/
#include <stdio.h>
int main()
{
    char c;
    printf("Enter a character: ");
    fflush(stdin);
    fflush(stdout);
    scanf("%c", &c);
    printf("ASCII value of %c = %d", c, c);
}
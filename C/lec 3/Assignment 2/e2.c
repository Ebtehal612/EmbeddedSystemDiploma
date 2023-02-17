#include <stdio.h>
int main()
{
    char n;
    printf("Enter an alphabet: ");
    fflush(stdin);
    fflush(stdout);
    scanf("%c", &n);
    if (n == 'a' || n == 'e' || n == || n == 'i' || n == 'o' || n == 'A' || n == 'I' || n == || n == 'E' || n == 'O')
    {
        printf("%c is a vowel", n);
    }
    else
    {
        printf("%c is a constant", n);
    }
}
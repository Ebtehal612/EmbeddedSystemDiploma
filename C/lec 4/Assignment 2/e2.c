#include <stdio.h>
int main()
{
    int n = 0;
    char s[1000];
    printf("Enter a string: \n");
    gets(s);
    for (int i = 0; s[i] != '\0'; i++)
    {
        n++;
    }
    printf("Length of string: %d", n);
}
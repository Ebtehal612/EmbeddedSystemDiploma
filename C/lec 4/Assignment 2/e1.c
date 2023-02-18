#include <stdio.h>
int main()
{
    int n = 0;
    char c, s[1000];
    printf("Enter a string: \n");
    gets(s);
    printf("Enter a character to find frequency: \n");
    scanf("%c", &c);
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == c)
            n++;
    }
    printf("frequency of %c = %d", c, n);
}
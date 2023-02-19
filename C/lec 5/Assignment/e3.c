#include <stdio.h>
#include <string.h>
char st[1000];
void reverse(char s, int x)
{
    if (x > 0)
    {
        printf("%c", s);
        reverse(st[x - 1], x - 1);
    }
    else if (x == 0)
        printf("%c", s);
}

int main()
{

    printf("Enter a sentence: ");
    gets(st);

    reverse(st[strlen(st) - 1], strlen(st) - 1);
}
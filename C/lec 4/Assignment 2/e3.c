#include <stdio.h>
#include <string.h>
int main()
{
    char s[1000], t[1000];
    printf("Enter the string : \n");
    gets(s);
    printf("Reverse string is : ");
    for (int i = strlen(s); i >= 0; i--)
    {
        printf("%c", s[i]);
    }
}
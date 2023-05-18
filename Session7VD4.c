/* To convert an uppercase character to lowercase */
#include <stdio.h>

void main()
{
    char c;
    printf("Please enter a character :");
    scanf("%c", &c);
    if (c >= 'A' && c <= 'Z')
        printf("Lowercase character = %c", c + 'a' - 'A');
    else
        printf(" Character entered is = %c", c);
}
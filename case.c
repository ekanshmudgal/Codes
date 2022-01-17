#include <stdio.h>
void main()
{
    char ch;

    printf("Which alphabet do you want do check as a lowercase alphabet\?\n");
    scanf("%c", &ch);

    if (ch>=97 && ch<=122)
        {
            printf("The entered character is a LOWERCASE ALPHABET :)");
        }
    else
        {
            printf("The entered character is not a lowercase alphaber \t;_;");
        }
}
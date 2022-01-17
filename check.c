#include <stdio.h>
void main()
{
    char ch;

    printf("Please Enter your character:\n");
    scanf("%c", &ch);

    if (ch>=33 && ch<=47)
        {
            printf("The entered character is a \'Special Symbol\'");
        }
    else if (ch>=48 && ch<=57)
        {
            printf("The entered character is a \'Number\'");
        }
    else if (ch>=58 && ch<=64)
        {
            printf("The entered character is a \'Special Symbol\'");
        }
    else if (ch>=65 && ch<=90)
        {
            printf("The entered character is an \'Uppercase Alphabet\'");
        }
    else if (ch>=91 && ch<=96)
        {
            printf("The entered character is a \'Special Symbol\'");
        }
    else if (ch>=97 && ch<=122)
        {
            printf("The entered character is a \'Lowercase Alphabet\'");
        }
    else if (ch>=123 && ch<=126)
        {
            printf("The entered character is a \'Special Symbol\'");
        }
    else
        {
            printf("Enter a Valid Character");
        }
}

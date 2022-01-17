#include <stdio.h>
void main()
{
    int year;

    printf("Which year you want to check as a leap year\?\n");
    scanf("%d", &year);

    if (year%4==0)
        {
            printf("The entered year is a leap year");
        }
    else if (year%100==0)
        {
            printf("The entered year is not a leap year\t;_;");
        }
    else if (year%400==0)
        {
            printf("The entered year is a leap year");
        }
    else
        {
            printf("The entered year is not a leap year\t;__;");
        }
}
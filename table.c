#include <stdio.h>
void main()
{
    int a, num, mult;

    printf("Enter the number for which the table is to be printed:\n");
    scanf("%d", &num);

    printf("Enter the number till the table is to be printed:\n");
    scanf("%d", &mult);

    for (a=1; a<=mult; a++)
    {
        printf("%d x %d = %d\n", num, a, num*a);
    }
}
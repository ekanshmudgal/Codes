#include <stdio.h>
void main()
{
    int i, num;

    printf("Printing all even numbers from 0 to\?\t", num);
    scanf("%d", &num);

    printf("All the even numbers from 0 to %d are:\n", num);

    i = 0;
    while (i<=num)
        {
            printf("%d\n", i);
            i+=2;
        }
}
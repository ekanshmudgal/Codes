#include <stdio.h>
void main()
{
    int a=0, num;

    printf("Printing first N natural numbers till\?\n");
    scanf("%d", &num);

    printf("The first N natural numbers till %d are:", num);

    do
    {
        printf("%d\n", a);
        a++;
    }
    while (a<num);
}